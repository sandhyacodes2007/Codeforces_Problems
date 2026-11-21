"""
Privacy-Preserving Logistic Regression (PP-LR) + XAI
======================================================
Concept (matches your notebook diagram):
  - Train Logistic Regression on plaintext data (sklearn)
  - Encrypt input features using CKKS scheme (RLWE-based HE) via TenSEAL
  - Do encrypted inference: dot product on ciphertexts (C1 + C8 = C13 type ops)
  - Sigmoid (1/(1+e^-x)) is NON-LINEAR -> HE can't compute it directly,
    so we replace it with a POLYNOMIAL APPROXIMATION (degree-3 here)
  - Decrypt final result -> compare with plaintext prediction
  - XAI part: SHAP explains the PLAINTEXT model (you can't easily run SHAP
    on encrypted data, so explainability is done on the trained model itself,
    and the same explanation applies to the encrypted inference since the
    encrypted computation mimics the plaintext one)

Install first (Kaggle/Colab):
    !pip install tenseal shap scikit-learn --quiet
"""

import numpy as np
from sklearn.datasets import load_breast_cancer
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.preprocessing import StandardScaler

import tenseal as ts
import shap


# ----------------------------------------------------------------------
# STEP 1: Train a normal (plaintext) Logistic Regression model
# ----------------------------------------------------------------------
def train_plaintext_model():
    data = load_breast_cancer()
    X, y = data.data, data.target

    scaler = StandardScaler()
    X = scaler.fit_transform(X)

    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.2, random_state=42
    )

    model = LogisticRegression(max_iter=1000)
    model.fit(X_train, y_train)

    print(f"Plaintext model accuracy: {model.score(X_test, y_test):.4f}")
    return model, X_train, X_test, y_test, data.feature_names


# ----------------------------------------------------------------------
# STEP 2: Setup CKKS context (this is your "P/Q" moduli + RLWE part)
# ----------------------------------------------------------------------
def create_ckks_context():
    context = ts.context(
        ts.SCHEME_TYPE.CKKS,
        poly_modulus_degree=16384,      //                 # bigger ring -> more depth budget
        coeff_mod_bit_sizes=[60, 40, 40, 40, 40, 60] //     # modulus chain (your "P/Q"), 4 usable levels
    )
    context.generate_galois_keys()//
    context.global_scale = 2 ** 40//
    return context


# ----------------------------------------------------------------------
# STEP 3: Polynomial approximation of sigmoid
#   sigmoid(x) = 1 / (1 + e^-x)  -> not HE-friendly (division + exp)
#   Degree-3 approx (common in CKKS literature):
#   sigmoid(x) ~= 0.5 + 0.197*x - 0.004*x^3
# ----------------------------------------------------------------------
def poly_sigmoid_plain(x):
    """Plaintext version (for sanity-check comparison)."""
    return 0.5 + 0.197 * x - 0.004 * (x ** 3)


def poly_sigmoid_encrypted(enc_x):
    """
    Encrypted version. Only +, -, * are allowed on ciphertexts (this is
    the C1, C8, C13 style operations from your notes), so we build the
    polynomial purely from ciphertext arithmetic.
    """
    x2 = enc_x * enc_x          # x^2  (this consumes one "level" in CKKS)
    x3 = x2 * enc_x             # x^3
    term1 = enc_x * 0.197       # 0.197 * x
    term2 = x3 * (-0.004)       # -0.004 * x^3
    result = term1 + term2 + 0.5
    return result


# ----------------------------------------------------------------------
# STEP 4: Encrypted inference
#   encrypted_dot_product(weights, x) -> poly_sigmoid -> decrypt
# ----------------------------------------------------------------------
def encrypted_predict(context, model, x_sample):
    w = model.coef_[0]      # weight vector
    b = model.intercept_[0]

    enc_x = ts.ckks_vector(context, x_sample.tolist())
    enc_w = ts.ckks_vector(context, w.tolist())

    # Encrypted dot product: sum(w_i * x_i) + b
    enc_dot = enc_x.dot(enc_w) + b

    # Apply polynomial sigmoid ON THE CIPHERTEXT
    enc_prob = poly_sigmoid_encrypted(enc_dot)

    # Decrypt final result only (client-side)
    decrypted_prob = enc_prob.decrypt()[0]
    return decrypted_prob


# ----------------------------------------------------------------------
# STEP 5: XAI - explain the model's decisions with SHAP
# ----------------------------------------------------------------------
def explain_model(model, X_train, X_test, feature_names, sample_idx=0):
    explainer = shap.LinearExplainer(model, X_train)
    shap_values = explainer.shap_values(X_test)

    print(f"\nTop features driving prediction for sample #{sample_idx}:")
    contributions = list(zip(feature_names, shap_values[sample_idx]))
    contributions.sort(key=lambda t: abs(t[1]), reverse=True)
    for name, val in contributions[:5]:
        direction = "increases" if val > 0 else "decreases"
        print(f"  {name:25s} -> {direction} malignancy score (SHAP={val:.4f})")

    return shap_values


# ----------------------------------------------------------------------
# MAIN
# ----------------------------------------------------------------------
if __name__ == "__main__":
    model, X_train, X_test, y_test, feature_names = train_plaintext_model()
    context = create_ckks_context()

    idx = 0
    sample = X_test[idx]

    plain_prob = model.predict_proba(sample.reshape(1, -1))[0][1]
    enc_prob = encrypted_predict(context, model, sample)

    print(f"\n--- Sample #{idx} ---")
    print(f"Plaintext sklearn probability : {plain_prob:.4f}")
    print(f"Encrypted (CKKS + poly-sigmoid) probability : {enc_prob:.4f}")
    print(f"Actual label: {y_test[idx]}")

    explain_model(model, X_train, X_test, feature_names, sample_idx=idx)
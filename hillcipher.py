# Experiment 8: Hill Cipher (2 x 2 key matrix)  A=0 ... Z=25
from math import gcd

def hill(text, m):                                    # encrypt/decrypt 2 letters at a time
    out = ""
    for i in range(0, len(text), 2):
        p, q = ord(text[i]) - 65, ord(text[i + 1]) - 65          # letters -> numbers
        out += chr((m[0][0] * p + m[0][1] * q) % 26 + 65)
        out += chr((m[1][0] * p + m[1][1] * q) % 26 + 65)
    return out

print("Enter the 2 x 2 key matrix:")
a, b = map(int, input("Row 1 (a b): ").split())
c, d = map(int, input("Row 2 (c d): ").split())
det = (a * d - b * c) % 26

if gcd(det, 26) != 1:
    print("Determinant", det, "and 26 are not coprime, so the key is NOT invertible. Choose another key.")
else:
    di = pow(det, -1, 26)                                        # inverse of determinant mod 26
    k  = [[a, b], [c, d]]
    ik = [[di * d % 26, -di * b % 26], [-di * c % 26, di * a % 26]]   # inverse key matrix
    print("\nDeterminant (mod 26):", det, "| Inverse of determinant:", di)
    print("Inverse key matrix  :", ik)

    text = "".join(ch for ch in input("\nEnter plaintext: ").upper() if "A" <= ch <= "Z")
    if len(text) % 2: text += "X"                                # pad to even length
    e = hill(text, k)
    print("\nPlaintext used :", text)
    print("Ciphertext     :", e)
    print("Decrypted text :", hill(e, ik))
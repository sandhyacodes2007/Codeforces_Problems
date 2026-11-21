# Experiment 6: Affine Cipher  C = (aP + b) mod 26
from math import gcd

def affine(text, m, s):                                # letter -> (m * letter + s) mod 26
    return "".join(chr((m * (ord(ch) - 65) + s) % 26 + 65) if "A" <= ch <= "Z" else ch
                   for ch in text.upper())

text = input("Enter plaintext: ")
a = int(input("Enter key a (relatively prime to 26): ")) % 26
b = int(input("Enter key b (additive key): ")) % 26

if gcd(a, 26) != 1:
    print("Invalid key a! Valid values: 1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25")
else:
    ai = pow(a, -1, 26)                                # inverse of a mod 26
    e = affine(text, a, b)                             # encrypt: a*P + b
    print("Inverse of a:", ai, "| Check:", a * ai % 26, "(should be 1)")
    print("Encrypted text:", e)
    print("Decrypted text:", affine(e, ai, -ai * b))   # decrypt: ai*(C - b) = ai*C - ai*b
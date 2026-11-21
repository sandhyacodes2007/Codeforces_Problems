# Experiment 5: Multiplicative Cipher  A=0 ... Z=25
from math import gcd

def multiply(text, k):
    out = ""
    for ch in text.upper():
        if "A" <= ch <= "Z":
            out += chr((ord(ch) - 65) * k % 26 + 65)   # letter -> number -> multiply -> letter
        else:
            out += ch                                   # keep spaces and symbols
    return out

plaintext = input("Enter plaintext: ")
key = int(input("Enter key (must be relatively prime to 26): ")) % 26

if gcd(key, 26) != 1:
    print("Invalid key! Valid keys: 1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25")
else:
    inv = pow(key, -1, 26)                              # multiplicative inverse mod 26
    e = multiply(plaintext, key)
    print("\nKey            :", key)
    print("Inverse of key :", inv)
    print("Check          :", key * inv % 26, "(should be 1)")
    print("Encrypted text :", e)
    print("Decrypted text :", multiply(e, inv))
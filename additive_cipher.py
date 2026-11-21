# Experiment 4: Additive (Caesar) Cipher  A=0 ... Z=25

def shift(text, k):
    out = ""
    for ch in text.upper():
        if "A" <= ch <= "Z":
            out += chr((ord(ch) - 65 + k) % 26 + 65)   # letter -> number -> shift -> letter
        else:
            out += ch                                   # keep spaces and symbols
    return out

plaintext = input("Enter plaintext: ")
key = int(input("Enter key (integer): ")) % 26
e = shift(plaintext, key)

print("\nKey used       :", key)
print("Encrypted text :", e)
print("Decrypted text :", shift(e, -key))
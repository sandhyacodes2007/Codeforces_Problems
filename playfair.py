# Experiment 7: Playfair Cipher (I and J share one cell)

def clean(t):                                    # letters only, uppercase, J -> I
    return "".join(c for c in t.upper() if "A" <= c <= "Z").replace("J", "I")

def run(pairs, d):                               # d = +1 encrypt, -1 decrypt
    out = []
    for a, b in pairs:
        r1, c1 = divmod(s.index(a), 5)
        r2, c2 = divmod(s.index(b), 5)
        if r1 == r2:   c1, c2 = (c1 + d) % 5, (c2 + d) % 5    # same row
        elif c1 == c2: r1, r2 = (r1 + d) % 5, (r2 + d) % 5    # same column
        else:          c1, c2 = c2, c1                        # rectangle
        out.append(s[r1 * 5 + c1] + s[r2 * 5 + c2])
    return out

key = input("Enter key: ")
text = clean(input("Enter plaintext: "))

# Key square: key letters first, then the rest of the alphabet (no J)
s = "".join(dict.fromkeys(clean(key) + "ABCDEFGHIKLMNOPQRSTUVWXYZ"))
print("\n5 x 5 key matrix:")
for i in range(0, 25, 5): print(" ".join(s[i:i + 5]))

# Make pairs: X goes between double letters, and pads the end
pairs, i = [], 0
while i < len(text):
    f, g = text[i], (text[i + 1] if i + 1 < len(text) else "X")
    if f == g: g, i = "X", i - 1                 # double letter: use X, move by 1 only
    pairs.append(f + g)
    i += 2

e = run(pairs, 1)
print("\nPlaintext pairs:", " ".join(pairs))
print("Ciphertext     :", "".join(e))
print("Decrypted text :", "".join(run(e, -1)), "(extra X letters remain)")
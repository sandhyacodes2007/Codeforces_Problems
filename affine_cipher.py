import math

def mod_inverse(a, m):
    """Extended Euclidean method to find modular inverse of a mod m"""
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return None  # inverse doesn't exist if gcd(a, m) != 1

def affine_encrypt(text, a, b):
    result = ""
    for ch in text:
        if ch.isupper():
            x = ord(ch) - ord('A')
            enc = (a * x + b) % 26
            result += chr(enc + ord('A'))
        elif ch.islower():
            x = ord(ch) - ord('a')
            enc = (a * x + b) % 26
            result += chr(enc + ord('a'))
        else:
            result += ch  # non-alphabet chars unchanged
    return result

def affine_decrypt(cipher, a, b):
    result = ""
    a_inv = mod_inverse(a, 26)
    for ch in cipher:
        if ch.isupper():
            y = ord(ch) - ord('A')
            dec = (a_inv * (y - b)) % 26
            result += chr(dec + ord('A'))
        elif ch.islower():
            y = ord(ch) - ord('a')
            dec = (a_inv * (y - b)) % 26
            result += chr(dec + ord('a'))
        else:
            result += ch
    return result

if __name__ == "__main__":
    text = input("Enter plaintext: ")
    a = int(input("Enter key a: "))
    b = int(input("Enter key b: "))

    if math.gcd(a, 26) != 1:
        print("Invalid key 'a'! a must be coprime with 26.")
    else:
        encrypted = affine_encrypt(text, a, b)
        decrypted = affine_decrypt(encrypted, a, b)

        print("Encrypted:", encrypted)
        print("Decrypted:", decrypted)
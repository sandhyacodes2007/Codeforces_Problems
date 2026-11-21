def modular_power(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:
            result = (result * base) % modulus
        base = (base * base) % modulus
        exponent = exponent // 2
    return result


def find_generators(p):
    # p - 1 = 100 = 2^2 * 5, so test g^50 and g^20
    generators = []
    for g in range(p - 1, 1, -1):
        if modular_power(g, 50, p) != 1 and modular_power(g, 20, p) != 1:
            generators.append(g)
    return generators


def shift_text(message, shift):
    result = ""
    for ch in message:
        if 'A' <= ch <= 'Z':
            result += chr((ord(ch) - ord('A') + shift) % 26 + ord('A'))
        elif 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + shift) % 26 + ord('a'))
        else:
            result += ch
    return result


def encrypt(message, key):
    return shift_text(message, key % 26)


def decrypt(message, key):
    return shift_text(message, -(key % 26))


p = 101
generators = find_generators(p)
print("Generators in descending order:", generators)

g = generators[3]
print("Fourth generator:", g)

alice_private = 42
bob_private = 73

alice_public = modular_power(g, alice_private, p)
bob_public = modular_power(g, bob_private, p)
print("Alice's Public Key:", alice_public)
print("Bob's Public Key:", bob_public)

alice_secret = modular_power(bob_public, alice_private, p)
bob_secret = modular_power(alice_public, bob_private, p)
print("Alice's Shared Secret:", alice_secret)
print("Bob's Shared Secret:", bob_secret)

if alice_secret == bob_secret:
    print("Shared Secret Established")
    message = "FULLY HOMOMORPHIC ENCRYPTION"
    ciphertext = encrypt(message, alice_secret)
    print("Original Message:", message)
    print("Encrypted Message:", ciphertext)
    decrypted_message = decrypt(ciphertext, bob_secret)
    print("Decrypted Message:", decrypted_message)
    print("Verification:", decrypted_message == message)
else:
    print("Key Exchange Failed")
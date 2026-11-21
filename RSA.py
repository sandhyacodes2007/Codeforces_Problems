def modular_power(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:bh
            result = (result * base) % modulus
        base = (base * base) % modulus
        exponent = exponent // 2
    return result


p = 11
q = 17
M = 89
e = 7

n = p * q
phi = (p - 1) * (q - 1)

d = 1
while (e * d) % phi != 1:
    d += 1

C = modular_power(M, e, n)
decrypted_message = modular_power(C, d, n)

print("Public Key:", (e, n))
print("Private Key:", (d, n))
print("Plaintext:", M)
print("Ciphertext:", C)
print("Decrypted Message:", decrypted_message)
print("Verification:", decrypted_message == M)
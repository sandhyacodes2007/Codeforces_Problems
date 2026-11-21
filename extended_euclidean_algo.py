# Experiment 2: Extended Euclidean Algorithm

def extended_gcd(a, b):
    if b == 0:
        return a, 1, 0
    g, x1, y1 = extended_gcd(b, a % b)
    return g, y1, x1 - (a // b) * y1

a = int(input("Enter first number (a): "))
b = int(input("Enter second number (b): "))

g, x, y = extended_gcd(a, b)
print(f"GCD({a}, {b}) = {g}")
print(f"Bezout coefficients: x = {x}, y = {y}")
print(f"Verification: {a}*{x} + {b}*{y} = {a*x + b*y}")
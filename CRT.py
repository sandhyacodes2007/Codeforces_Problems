from math import prod


def modular_power(a, b, m):
    """Compute (a ** b) % m by fast exponentiation."""
    result = 1
    a %= m
    while b > 0:
        if b & 1:
            result = (result * a) % m
        a = (a * a) % m
        b >>= 1
    return result


def extended_gcd(a, b):
    """Return (g, x, y) such that a*x + b*y = g = gcd(a, b)."""
    if b == 0:
        return a, 1, 0
    g, x, y = extended_gcd(b, a % b)
    return g, y, x - (a // b) * y


def crt(remainders, moduli):
    """Solve x ≡ r_i (mod m_i) for pairwise coprime moduli."""
    M = prod(moduli)
    x = 0
    for r, m in zip(remainders, moduli):
        Mi = M // m
        g, inv, _ = extended_gcd(Mi, m)
        if g != 1:
            raise ValueError("Moduli must be pairwise coprime")
        x += r * Mi * inv
    return x % M


def solve_power_congruence(base, exponent, moduli):
    """Compute base**exponent mod prod(moduli) via CRT."""
    remainders = [modular_power(base, exponent, m) for m in moduli]
    return crt(remainders, moduli)


if __name__ == "__main__":
    x1 = solve_power_congruence(38, 100, [5, 7])
    x2 = solve_power_congruence(5_000_000, 10_000_000, [23, 48397])
    print("First equation:", x1)    # 11
    print("Second equation:", x2)   # 628603
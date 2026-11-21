# Experiment 3: Euler's Totient Function
from math import gcd

n = int(input("Enter a positive integer n: "))

# Method 1: count the numbers from 1 to n that are coprime with n
nums = [i for i in range(1, n + 1) if gcd(i, n) == 1]

# Method 2: formula, for each prime factor p of n: result = result - result/p
result, t, p = n, n, 2
while p * p <= t:
    if t % p == 0:
        while t % p == 0:
            t //= p
        result -= result // p
    p += 1
if t > 1:                       # one prime factor may be left over
    result -= result // t

print("Numbers relatively prime to", n, ":", nums)
print("phi by counting =", len(nums))
print("phi by formula  =", result)
if n > 1 and len(nums) == n - 1:
    print(n, "is prime, so phi(n) = n - 1")
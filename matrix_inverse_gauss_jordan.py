# Experiment 1: Matrix Inverse using Gauss-Jordan Elimination

n = int(input("Enter the order of the matrix (n): "))
a = [list(map(float, input(f"Row {i+1}: ").split())) for i in range(n)]

# Step 1: Make augmented matrix [A | I]
g = []
for i in range(n):
    identity_row = [1.0 if i == j else 0.0 for j in range(n)]
    g.append(a[i] + identity_row)

# Step 2: Gauss-Jordan elimination
singular = False
for c in range(n):
    # Find the row with the largest value in column c (pivot)
    p = max(range(c, n), key=lambda r: abs(g[r][c]))
    if abs(g[p][c]) < 1e-9:
        singular = True
        break
    g[c], g[p] = g[p], g[c]              # swap rows

    pivot = g[c][c]
    g[c] = [x / pivot for x in g[c]]     # make pivot = 1

    for r in range(n):                   # make other entries in column c = 0
        if r != c:
            f = g[r][c]
            g[r] = [g[r][j] - f * g[c][j] for j in range(2 * n)]

# Step 3: Print result
if singular:
    print("Matrix is singular. Inverse does not exist.")
else:
    inv = [row[n:] for row in g]
    print("\nInverse of A:")
    for row in inv:
        print(" ".join(f"{x:9.4f}" for x in row))
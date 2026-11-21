text = input("Enter N: ")
N = 0
for ch in text:                      # convert text to number without int()
    d = 0
    while d < 10 and "0123456789"[d] != ch:
        d = d + 1
    N = N * 10 + d
q = [-1] * N                         # q[row] = column of queen (-1 = empty row)
step = 0

def show():                          # print current board
    r = 0
    while r < N:
        s = ""; c = 0
        while c < N:
            s = s + ("Q " if q[r] == c else ". "); c = c + 1
        print(s); r = r + 1
    print()

def safe(r, c):
    i = 0
    while i < r:
        if q[i] == c or q[i] - c == i - r or q[i] - c == r - i:
            return False             # same column or diagonal
        i = i + 1
    return True

def solve(r):
    global step
    if r == N: return True
    c = 0
    while c < N:
        if safe(r, c):
            q[r] = c; step = step + 1
            print("Step", step, ": Place queen at row", r, "col", c)
            show()
            if solve(r + 1): return True
            q[r] = -1; step = step + 1
            print("Step", step, ": Remove queen from row", r, "col", c, "(backtrack)")
            show()
        c = c + 1
    return False

if N > 0 and solve(0):
    print("Final Solution:")
    show()
else:
    print("No solution for N =", N)
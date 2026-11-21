seed = 7
def rand():                                   # own random number (0 to 1)
    global seed
    seed = (1103515245 * seed + 12345) % 2147483648
    return seed / 2147483648

pop = [0] * 6
for i in [0, 1, 2, 3, 4, 5]:                  # initial population
    pop[i] = 8*(rand()<0.5) + 4*(rand()<0.5) + 2*(rand()<0.5) + (rand()<0.5)

for g in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:     # 10 generations
    best = pop[0]; total = 0
    for x in pop:
        total = total + x * x                 # fitness = x*x
        if x > best: best = x
    print("Gen", g, "Best x =", best, " f(x) =", best * best)
    new = []; n = 0
    while n < 6:
        p = [0, 0]
        for k in [0, 1]:                      # roulette wheel selection
            r = rand() * total; run = 0; p[k] = pop[5]
            for x in pop:
                run = run + x * x
                if run >= r:
                    p[k] = x; break
        pw = 2 if rand() < 0.33 else (4 if rand() < 0.5 else 8)   # single-point crossover
        c1 = (p[0] // pw) * pw + p[1] % pw
        c2 = (p[1] // pw) * pw + p[0] % pw
        for b in [8, 4, 2, 1]:                # bit-flip mutation (0.1)
            if rand() < 0.1: c1 = c1 - b if (c1 // b) % 2 else c1 + b
            if rand() < 0.1: c2 = c2 - b if (c2 // b) % 2 else c2 + b
        new = new + [c1, c2]; n = n + 2
    pop = new

best = pop[0]
for x in pop:
    if x > best: best = x
print("Maximum f(x) =", best * best, "at x =", best)
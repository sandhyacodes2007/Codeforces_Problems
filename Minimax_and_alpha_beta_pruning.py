leaf = [3, 5, 6, 9, 1, 2, 0, -1]              # change to your tree's leaf values
mm = ab = 0

def minimax(d, i, mx):
    global mm
    if d == 3:
        mm = mm + 1; return leaf[i]
    a = minimax(d + 1, 2*i, not mx); b = minimax(d + 1, 2*i + 1, not mx)
    v = (a if a > b else b) if mx else (a if a < b else b)
    print("MAX" if mx else "MIN", "node (depth", d, "index", i, ") =", v)
    return v

def alphabeta(d, i, mx, al, be):
    global ab
    if d == 3:
        ab = ab + 1; return leaf[i]
    best = -1000 if mx else 1000
    for k in [0, 1]:
        v = alphabeta(d + 1, 2*i + k, not mx, al, be)
        if mx:
            best = v if v > best else best; al = best if best > al else al
        else:
            best = v if v < best else best; be = best if best < be else be
        if be <= al:
            print("Pruned at node (depth", d, "index", i, ")"); break
    return best

print("Minimax root =", minimax(0, 0, True), "| Leaf nodes evaluated =", mm)
print("Alpha-Beta root =", alphabeta(0, 0, True, -1000, 1000), "| Leaf nodes evaluated =", ab)
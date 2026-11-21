def gmul(a, b):
    """GF(2^8) multiplication (AES polynomial x^8+x^4+x^3+x+1)"""
    p = 0
    for _ in range(8):
        if b & 1:
            p ^= a
        hi = a & 0x80
        a = (a << 1) & 0xFF
        if hi:
            a ^= 0x1B
        b >>= 1
    return p

def rotl8(v, n):
    return ((v << n) | (v >> (8 - n))) & 0xFF

def build_sbox():
    sbox = []
    for x in range(256):
        inv = 0
        if x:
            for y in range(1, 256):      # multiplicative inverse
                if gmul(x, y) == 1:
                    inv = y
                    break
        s = inv ^ rotl8(inv, 1) ^ rotl8(inv, 2) ^ rotl8(inv, 3) ^ rotl8(inv, 4) ^ 0x63
        sbox.append(s)
    return sbox

SBOX = build_sbox()

def key_expansion(key: bytes):
    """key: 16, 24 ya 32 bytes (AES-128/192/256). Returns list of round keys."""
    if len(key) not in (16, 24, 32):
        raise ValueError("Key 16, 24 ya 32 bytes ki honi chahiye")

    Nk = len(key) // 4
    Nr = Nk + 6
    total_words = 4 * (Nr + 1)

    w = [list(key[4*i:4*i+4]) for i in range(Nk)]
    rcon = 1

    for i in range(Nk, total_words):
        temp = w[i-1][:]
        if i % Nk == 0:
            temp = temp[1:] + temp[:1]            # RotWord
            temp = [SBOX[b] for b in temp]        # SubWord
            temp[0] ^= rcon
            rcon = gmul(rcon, 2)
        elif Nk > 6 and i % Nk == 4:
            temp = [SBOX[b] for b in temp]
        w.append([w[i-Nk][j] ^ temp[j] for j in range(4)])

    # 4 words = 1 round key (16 bytes)
    return [bytes(sum(w[4*r:4*r+4], [])) for r in range(Nr + 1)]


if __name__ == "__main__":
    key = bytes.fromhex("2b7e151628aed2a6abf7158809cf4f3c")  # FIPS-197 test key
    for i, rk in enumerate(key_expansion(key)):
        print(f"Round {i:2d}: {rk.hex()}")
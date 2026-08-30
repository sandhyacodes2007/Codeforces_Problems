def generate_key_matrix(key):
    key = key.upper().replace("J", "I")
    seen = set()
    matrix_key = ""
    
    for ch in key:
        if ch.isalpha() and ch not in seen:
            seen.add(ch)
            matrix_key += ch
    
    for ch in "ABCDEFGHIKLMNOPQRSTUVWXYZ":  # no J, merged with I
        if ch not in seen:
            seen.add(ch)
            matrix_key += ch
    
    matrix = [list(matrix_key[i*5:(i+1)*5]) for i in range(5)]
    return matrix

def find_position(matrix, ch):
    for i in range(5):
        for j in range(5):
            if matrix[i][j] == ch:
                return i, j
    return None

def prepare_text(text):
    text = text.upper().replace("J", "I")
    text = ''.join(ch for ch in text if ch.isalpha())
    
    prepared = ""
    i = 0
    while i < len(text):
        a = text[i]
        if i + 1 < len(text):
            b = text[i+1]
            if a == b:
                prepared += a + "X"
                i += 1
            else:
                prepared += a + b
                i += 2
        else:
            prepared += a + "X"
            i += 1
    return prepared

def playfair_encrypt(plaintext, key):
    matrix = generate_key_matrix(key)
    text = prepare_text(plaintext)
    result = ""
    
    for i in range(0, len(text), 2):
        a, b = text[i], text[i+1]
        row_a, col_a = find_position(matrix, a)
        row_b, col_b = find_position(matrix, b)
        
        if row_a == row_b:  # same row -> shift right
            result += matrix[row_a][(col_a + 1) % 5]
            result += matrix[row_b][(col_b + 1) % 5]
        elif col_a == col_b:  # same column -> shift down
            result += matrix[(row_a + 1) % 5][col_a]
            result += matrix[(row_b + 1) % 5][col_b]
        else:  # rectangle -> swap columns
            result += matrix[row_a][col_b]
            result +=
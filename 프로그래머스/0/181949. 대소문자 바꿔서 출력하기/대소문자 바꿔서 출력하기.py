str = input()

for w in str:
    if ord(w) >= ord('A') and ord(w) <= ord('Z'):
            w = w.lower()
    elif ord(w) >= ord('a') and ord(w) <= ord('z'):
            w = w.upper()
    print(f"{w}", end="")
v = []
with open("sygnaly.txt") as f:
    for line in f:
        v.append(line.strip())

w = []
for word in v:
    s = set([])
    for ch in word:
        s.add(ch)
    w.append(s)

for idx, bag in enumerate(w):
    ok = True
    for a in bag:
        for b in bag:
            d = abs(ord(a) - ord(b))
            if d > 10:
                ok = False
                break
        if not ok:
            break
    if ok:
        print(v[idx])

v = []
with open("sygnaly.txt") as f:
    for line in f:
        v.append(line.strip())

w = []
m = -1
midx = 0
for word in v:
    s = set([])
    for ch in word:
        s.add(ch)
    w.append(s)
    if len(s) > m:
        m = len(s)
        midx = len(w) - 1

print(m, v[midx])

v = []
with open("sygnaly.txt") as f:
    for line in f:
        v.append(line.strip())

for i in range(39, 1000, 40):
    print(v[i][9], end="")

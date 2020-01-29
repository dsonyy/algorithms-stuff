import random as r

for i in range(1000):
    n = r.randrange(10) + 1
    m = r.randrange(n) + 1
    f = open("sma" + str(i) + ".in", "w")
    f.write(str(n) + " " + str(m) + "\n")
    for j in range(n):
        f.write(str(r.randrange(m) + 1) + " ")
    
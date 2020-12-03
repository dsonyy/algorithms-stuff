import sys

filename = input("input:")

def aaa(x):
    s = 0
    a = [int(i) for i in str(x)]
    for i in a:
        s += i**2
    
    if s != 1 and s != 4:
        return aaa(s)
    else:
        return s

AAAA = set({})

f = open(filename, "r")
for idx, line in enumerate(f):
    line = line.split()
    for i in line:
        u = aaa(int(i))
        a = [int(i) for i in str(i)]
        sum = 0
        for j in a:
            sum += j**2
        if u == 1: AAAA.add(sum)
        # print(i, "\t", u, file=sys.stderr)
    
print(len(AAAA))
f.close()

f = open(filename + ".out", "w")
for e in AAAA:
    f.write(str(e) + " ")
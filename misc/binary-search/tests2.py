from random import *

for i in range(1000):
    q = 0
    f = open("in/" + str(i) + ".txt", "w")
    last = randrange(0, 1000)
    for j in range(randrange(40, 100)):
        f.write(str(last) + " ")
        last += randrange(1000)
        q += 1
    n = last
    for j in range(randrange(40, 100)):
        last += randrange(1000)
        f.write(str(last) + " ")
    f.write("\n"+str(n)+"\n")
    open("out/" + str(i) + ".txt", "w").write("-1")
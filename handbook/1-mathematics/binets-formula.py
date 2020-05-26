from math import sqrt
for n in range(301):
    f = (1 + sqrt(5))**n - (1 - sqrt(5))**n
    f /= 2**n * sqrt(5)
    print("F(" + str(n) + ") =", int(f))
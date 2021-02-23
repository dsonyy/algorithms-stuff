# canonical coin system
c = [1, 2, 5, 10, 20, 50, 100, 200, 500]

n = 678

while n:
    i = len(c) - 1
    while c[i] > n:
        i -= 1
    n -= c[i]
    print(c[i], end=" ")


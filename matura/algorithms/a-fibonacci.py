N = 16

a, b = 0, 1
for n in range(N):
    print(a)
    a, b = b, a + b

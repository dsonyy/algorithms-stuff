N = 1000

for n in range(1, N):
    s = set({})

    if n == 1:
        continue

    i = 1
    while i*i <= n:
        if n % i == 0:
            s.add(i)
            s.add(n // i)
        i += 1

    if len(s) == 2:
        print(n)

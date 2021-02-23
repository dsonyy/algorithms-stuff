N = int(input())

for n in range(1, N):
    s = set({})
    i = 1
    while i*i <= n:
        if n % i == 0:
            s.add(i)
            s.add(n // i)
        i += 1

    s.remove(n)

    
    if sum(s) == n:
        print(n, " - ", s, " - is PERFECT!")

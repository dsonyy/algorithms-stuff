with open("pary.txt") as f:
    v = []
    for line in f:
        line = line.split()
        a = (int(line[0]), line[1])
        v.append(a)
        # print(a)




primes = []
for i in range(3, 101):
    isprime = True
    for j in range(2, i):
        if i % j == 0:
            isprime = False
            break
    if isprime:
        primes.append(i)
# print(primes)

print("\n4.1:\n")
for i in v:
    n = i[0]
    if n < 4 or n % 2 == 1:
        continue
    
    sums = []
    for x in primes:
        for y in primes:
            if x + y == n:
                sums.append((x, y))
    # print(n, sums)
    m = sums[0]
    for j in sums[1:]:
        if abs(j[0] - j[1]) > abs(m[0] - m[1]):
            m = j
    print(n, m[0], m[1])


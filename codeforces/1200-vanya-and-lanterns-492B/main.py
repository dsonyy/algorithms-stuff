n, l = (int(i) for i in input().split())
a = [int(i) for i in input().split()]

a = sorted(a)
m = max(a[0], l - a[-1])
for i in range(1, n):
    b = a[i] - a[i - 1]
    if b < 0: b = -b
    if b / 2 > m: m = b / 2
    
print(m)
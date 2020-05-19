v = [int(x) for x in input().split()]
n = len(v)
x = int(input())

left = 0
right = n - 1
center = right // 2
while right >= left:
    #print(left, center, right)
    if v[center] == x: break
    elif v[center] < x: left = center + 1
    else: right = center - 1
    center = left + right // 2)
if right < left: print(-1)
else: print(center)
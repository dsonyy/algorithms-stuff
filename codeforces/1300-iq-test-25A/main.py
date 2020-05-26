n = int(input())
v = [int(a) for a in input().split()]

for i in range(n):
    center = v[i]
    if i < n - 1:
        dif = v[i + 1] - v[i]
        cnt = 1
        for j in range(i + 1, n):
            # if v[j] == center + cnt*dif:
            print(v[j], "=", center + cnt*dif, end="  ")
            cnt += 1
        print("")
    if i > 0:
        dif = v[i] - v[i - 1]
        cnt = 1
        for j in range(i - 1, -1, -1):
             print(v[j], "=", center - cnt*dif, end="  ")
             cnt += 1
        print("")     
    print("-----------")
    
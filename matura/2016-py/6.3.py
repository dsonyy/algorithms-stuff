begin = ord("A")
end = ord("Z") + 1

with open("dane_6_3.txt") as f:
    for idx, line in enumerate(f):
        a, b = line.split()
        last_diff = None
        for i in range(len(a)):
            if last_diff is None:
                last_diff = (ord(a[i]) - ord(b[i])) % (end - begin)
            else:
                if last_diff != (ord(a[i]) - ord(b[i])) % (end - begin):
                    print(idx + 1, a, b)
                    break

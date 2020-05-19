import math,sys

w = open("wyniki4.txt", "w")
f = open("liczby.txt", "r")
sys.stdout = w
a = []
for num in f:
    a.append(int(num))

zad1 = 0
for num in a:
    while num % 3 == 0:
        num /= 3
    if num == 1: zad1 += 1
print("4.1.", zad1)

print("4.2. ", end="")
for num in a:
    sum = 0
    for ch in str(num): sum += math.factorial(int(ch))
    if sum == num: 
        print(num, end=" ")
print("")

zad3 = []
zad3div = 0
b = []
for num in a:
    divs = {num}
    i = 2
    while (i*i <= num):
        if num % i == 0: 
            divs.add(i)
            divs.add(num // i)
        i += 1
    b.append(divs)
for i in range(len(b) - 1):
    x = [a[i]]
    s = b[i].intersection(b[i + 1])
    j = i + 1
    if s: div = max(s)
    while j < len(b) and s:
        if s: div = max(s)
        x.append(a[j])
        j += 1
        s = s.intersection(b[j])
    if len(x) > len(zad3) and len(x) > 1:
        zad3 = x
        zad3div = div
print("4.3.", zad3[0], len(zad3), zad3div)
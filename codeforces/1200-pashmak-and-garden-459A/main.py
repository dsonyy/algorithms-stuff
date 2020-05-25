from math import sqrt
x1, y1, x2, y2 = (int(i) for i in input().split())

w, h = int(sqrt((x1-x2)**2)), int(sqrt((y1-y2)**2))

if x1 == x2:
    x3 = x1 + h
    y3 = y1
    x4 = x1 + h
    y4 = y2
    print(x3, y3, x4, y4)
elif y1 == y2:
    x3 = x1
    y3 = y1 + w
    x4 = x2
    y4 = y1 + w
    print(x3, y3, x4, y4)
elif w != h:
   print(-1)
else:
    x3 = x2
    y3 = y1
    x4 = x1
    y4 = y2
    print(x3, y3, x4, y4)
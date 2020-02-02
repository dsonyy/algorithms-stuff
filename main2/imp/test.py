import random

n = random.randrange(3, 7)
print(n)
for y in range(n):
    for x in range(y):
        print(9, end="")
    print(0, end="")
    for x in range(n - y - 1):
        print(random.randrange(2), end="")

    print("")

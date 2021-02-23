a = 36
b = 28

# Variant 1
while a != b:
    if a > b:
        a -= b
    else:
        b -= a

print(a)

# Variant 2: GCD(a, b) = GCD(a % b, b)
while b != 0:
    t = b
    b = a % b
    a = t
    
print(a)



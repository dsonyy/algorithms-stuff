n = 3625
b0 = 8
b1 = 2

# base b0 -> base 10
m = 0
i = 0
while n != 0:
    digit = n % 10
    mult = b0**(i)
    m += digit * mult
    n //= 10
    i += 1
print(m)

# base 10 -> base b1
r = ""
while m != 0:
    r += str(m % b1)
    m //= b1
print(r[::-1])

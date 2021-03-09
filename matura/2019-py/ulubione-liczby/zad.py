# Python 3
def fun(v):
    left = 1
    right = len(v) - 1
    while True:
        center = (left + right) // 2
        if v[center] % 2 == 1: left = center + 1
        elif v[center - 1] % 2 == 1: break
        else: right = center - 1
    return v[center]

a = "bbbb" # input()
b = "aaaa" # input()
b = [i for i in b]

anagram = True
if len(a) != len(b):
    anagram = False
else:
    for i in a:
        if i in b:
            b.remove(i)
        else:
            anagram = False
            break

print("is anagram:", anagram)

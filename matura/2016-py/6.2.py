begin = ord("A")
end = ord("Z") + 1

with open("dane_6_2.txt") as f:
    for idx, line in enumerate(f):
        line, k = line.split()
        k = int(k)
        line = line.strip()
        
        print(idx + 1, k, line, end=" ")

        for ch in line:
            chx = ord(ch) - begin
            chx -= k
            chx %= end - begin
            chx += begin
            print(chr(chx), end="")
        print("")

begin = ord("A")
end = ord("Z") + 1
k = 107

with open("dane_6_1.txt") as f:
    for idx, line in enumerate(f):
        line = line.strip()
        print(idx + 1, line, end=" ")
        for ch in line:
            chx = ord(ch) + k
            chx -= begin
            chx %= end - begin
            chx += begin
            
            print(chr(chx), end="")
            # chx = (ord(ch) + k) % end + begin
            # print(chr(chx), end="")
        print("")

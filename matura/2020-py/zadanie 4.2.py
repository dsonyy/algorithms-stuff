with open("pary.txt") as f:
    v = []
    for line in f:
        line = line.split()
        a = (int(line[0]), line[1])
        v.append(a)
        # print(a)


print("\n4.2:\n")
for i in v:
    w = i[1]
    
    s = [w[0]]
    maxlen = 1
    begin = 0
    end = 1
    for idx in range(1, len(w)):
        if w[end - 1] == w[idx]:
            end += 1
        else:
            s.append(w[begin:end])
            if end - begin> maxlen:
                maxlen = end - begin 
            begin = idx;
            end = idx + 1
    s.append(w[begin:end])
    if end - begin> maxlen:
        maxlen = end - begin
    #print(w, s)
    m = []
    for j in s:
        if len(j) == maxlen:
            m.append(j)
    print(m[0], maxlen)
                
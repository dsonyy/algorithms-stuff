with open("pary.txt") as f:
    v = []
    for line in f:
        line = line.split()
        a = (int(line[0]), line[1])
        v.append(a)
        # print(a)
        
w = []
for i in v:
    if i[0] == len(i[1]):
        w.append((int(str(i[0])), str(i[1])))
#print(w)

w.sort()

print("\n4.3:\n")

print(w[0][0], w[0][1])

            
    

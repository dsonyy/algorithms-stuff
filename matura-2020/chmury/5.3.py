import sys
f = open("5.3.txt", "w")
sys.stdout = f

f = open("pogoda.txt", "r")
f.readline()
C = [[],[],[],[],[]]
S = [[],[],[],[],[]]
data = []
for line in f:
    num, temp, rain, cloud, size = line.replace(",",".").split(";")
    num = int(num)
    temp = float(temp)
    rain = int(rain)
    size = int(size)
    data.append([num, temp, rain, cloud, size])
    
for i in range(300):
    if data[i][3] == "C":
        C[data[i][4] - 1].append(data[i][2])
    elif data[i][3] == "S":
        S[data[i][4] - 1].append(data[i][2])

print("C1 C2 C3 C4 C5 S1 S2 S3 S4 S5")
for c in C:
    x = 0
    for i in c:
        x += i
    x /= len(c)
    print(x, end=" ")
    
for c in S:
    x = 0
    for i in c:
        x += i
    x /= len(c)
    print(x, end=" ")
    
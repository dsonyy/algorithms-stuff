import sys
w = open("wyniki5.txt", "w")
sys.stdout = w

f = open("pogoda.txt", "r")
f.readline()
data = []
for line in f:
    num, temp, rain, cloud, size = line.replace(",",".").split(";")
    num = int(num)
    temp = float(temp)
    rain = int(rain)
    size = int(size)
    data.append([num, temp, rain, cloud, size])

zad1 = 0
for a in data:
    if a[1] > 20 and a[2] <= 5: zad1 +=1
print("5.1.", zad1)



zad2max = 0
zad2first = 0
zad2last = 0
t = 1
first = 1
last = 1
for i in range(1, len(data)):
    if data[i - 1][1] < data[i][1]: 
        t += 1
        last = data[i][0]
    elif t > zad2max:
        zad2max = t
        zad2first = first
        zad2last = last
        first = data[i][0]
    else:
        first = data[i][0]
print("5.2.", zad2first, zad2last)




s = []
for line in data:
    s.append(line[:-2] + ['0', 0])
for i in range(1, 500):
    s[i][3] = s[i - 1][3]
    s[i][4] = s[i - 1][4]

    if s[i - 1][4] == 0:
        s[i][4] = 1
        if s[i][1] >= 10:
            s[i][3] = "C"
        else:
            s[i][3] = "S"
    try:
        if s[i - 1][4] == s[i - 2][4] == s[i - 3][4] and s[i - 1][4] < 5:
           s[i][4] = s[i - 1][4] + 1
    except:
        pass
        
    if s[i - 1][4] == 5 and s[i - 1][2] >= 20:
        s[i][4] = 0
        s[i][3] = "0"

num = [0,0,0,0,0,0]
for day in s:
    num[day[4]] += 1

sameSize = 0
sameCateg = 0
for i in range(300):
    if data[i][4] == s[i][4]:
        sameSize += 1
    if data[i][3] == s[i][3]:
        sameCateg += 1
        
print("5.4.", num[0],num[1],num[2],num[3],num[4],num[5], sameSize, sameCateg)

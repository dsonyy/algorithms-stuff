import sys
w = open("wyniki6.txt", "w")
sys.stdout = w

m = open("marki.txt", "r")
p = open("perfumy.txt", "r")
s = open("sklad.txt", "r")
m.readline()
p.readline()
s.readline()

sklad = []
for a in s:
    a = a.replace("\n", "").split("\t")
    a = {"ip":a[0], "ns":a[1]}
    sklad.append(a)
    
marka = []
for a in m:
    a = a.replace("\n", "").split("\t")
    a = {"im":a[0], "nm":a[1]}
    marka.append(a)
    
perfumy = []
for a in p:
    a = a.replace("\n", "").split("\t")
    a = {"ip":a[0], "np":a[1], "im":a[2], "rz":a[3], "c":a[4]}
    perfumy.append(a)
    
print("6.1")
ip = []
for a in sklad:
    if a["ns"] == "absolut jasminu":
        ip.append(a["ip"])
for a in perfumy:
    if a["ip"] in ip:
        print(a["np"])
        
print("6.2")
rz = {}
for a in perfumy:
    if not a["rz"] in rz:
        rz[a["rz"]] = [a["c"], a["np"]]
    else:
        if rz[a["rz"]][0] > a["c"]:
            rz[a["rz"]][0] = a["c"] 
            rz[a["rz"]][1] = a["np"]
for a in rz.keys():
    print(a, rz[a][0], rz[a][1])
    
    
print("6.3")
mrk = []
for a in marka:
    x = True
    for b in perfumy:
        if b["im"] == a["im"]:
            for c in sklad:
                if b["ip"] == c["ip"]:
                    if "paczula" in c["ns"]:
                       x = False
    if x:
        mrk.append(a["nm"])
mrk.sort()
for a in mrk:
    print(a)
    
print("6.4")
k = []
for a in perfumy:
    if a["im"] == "m_1" and a["rz"] == "orientalno-drzewna":
        k.append([a["np"], round(int(a["c"]) * 0.85, 2)])
k.sort(key = lambda x: x[1])
for a in k:
    print(a[0], a[1])

print("6.5")
for a in marka:
    x = True
    rz = ""
    for b in perfumy:
        if b["im"] == a["im"]:
            if rz == "":
                rz = b["rz"]
            elif b["rz"] != rz:
                x = False
    if x:
        print(a["nm"], rz)

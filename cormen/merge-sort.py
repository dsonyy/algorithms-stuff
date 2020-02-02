from math import inf

def write(data, i):
    print(i, "\t|\t", end="")
    for j in data:
        print(j, end=" ")
    print("")
    
def load() -> list:
    filename = input("Enter filename with numbers to sort: ")
    try:
        return [int(i) for i in open(filename, "r").read().split()]
    except:
        print("An error occured while opening the file.")
        exit(0)

def merge(data, p, q, r):
    A = data[p : q] + [inf]
    B = data[q : r] + [inf]
    a = 0
    b = 0
    
    for i in range(p, r):
        if A[a] < B[b]:
            data[i] = A[a]
            a = a + 1
        else:
            data[i]= B[b]
            b = b + 1
            
    write(data, "comparing [" +str(p) + " " + str(q) + ") and [" + str(q) + " " + str(r) + ")")
    

def merge_sort(data, p, r):
    if p < r - 1:
        q = p + int((r - p) / 2)
        merge_sort(data, p, q)
        merge_sort(data, q, r)
        merge(data, p, q, r)
        

data = load()
merge_sort(data, 0, len(data))
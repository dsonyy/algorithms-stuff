
def write(data, i):
    print(i, ")\t", end="")
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

def insertion_sort(data):
    write(data, 0)

    for i in range(1, len(data)):
        for j in reversed(range(1, i + 1)):
            if data[j - 1] > data[j]:
                data[j - 1], data[j] = data[j], data[j - 1]
            else:
                break
        write(data, i)
    
 
data = load() 
insertion_sort(data)
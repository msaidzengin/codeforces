q = int(input())
inp = []
for i in range(q):
    inp.append(input().split(" "))

for inpp in inp:
    n = int(inpp[0])
    x = int(inpp[1])
    a = int(inpp[2])
    b = int(inpp[3])

    cvp = abs(a - b)
    cvp += x

    if cvp >= (n - 1):
        cvp = n-1
    
    print(cvp)
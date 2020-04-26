q = int(input())
inp = []
for i in range(q):
    inp.append(input().split(" "))

for inpp in inp:
    a = int(inpp[0])
    b = int(inpp[1])
    n = int(inpp[2])
    s = int(inpp[3])

    bol = s // n
    cvp = 0
    if bol <= a:
        cvp = bol * n + b
    else:
        cvp = a * n + b

    if cvp >= s:
        print("YES")
    else:
        print("NO")
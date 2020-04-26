q = int(input())
inp = []
for i in range(q):
    inp.append(input().split(" "))

for inpp in inp:
    x = int(inpp[0])
    y = int(inpp[1])

    if x == 1:
        if y == 1:
            print("YES")
        else:
            print("NO")
    elif x == 2 or x == 3:
        if y <= 3:
            print("YES")
        else:
            print("NO")
    else:
        print("YES")
n = int(input())
inp = []
for i in range(n):
    inp.append(input().split())


for i in inp:
    a = int(i[0])
    b = int(i[1])
    if (a - b) > 1:
        print("YES")
    else:
        print("NO")
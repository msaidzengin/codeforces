inp = input().split()

n = int(inp[0])
p = int(inp[1])

flag = 0
for i in range(100):
    if (n - i * p) < i:
        break
    if (bin(n - i * p).count("1")) <= i:
        print(i)
        flag = 1
        break
if flag == 0:
    print(-1)
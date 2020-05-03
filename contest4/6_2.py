def check(numb, k):
    for i in range(numb+1):
        if pow(i,k) == numb:
            return True
    return False

inp = input().split()
n = int(inp[0])
k = int(inp[1])
inp = input().split()
inp.sort()
count = 0
for i in range(len(inp)):
    for j in range(len(inp)):
        if i == j:
            continue
        if int(inp[j]) % int(inp[i]) != 0:
            continue
        numb = (int(inp[i]) * int(inp[j]))
        if check(numb,k):
            count += 1
print(count // 2)
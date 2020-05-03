inp = input().split()
n = int(inp[0])
k = int(inp[1])
inp = input().split()
dictt = {}
ans = 0
for el in inp:
    i = 2
    a = []
    b = []
    while i*i <= el:
        cnt = 0
        while not(el%i):
            el //= i
            cnt += 1
        if cnt%k:
            a.append((i, cnt%k))
            b.append((i, k-(cnt%k)))
        i += 1
    if el > 1:
        a.append((el, 1))
        b.append((el, k-1))
    a = tuple(a)
    b = tuple(b)
    ans += dictt.get(b, 0)
    dictt[a] = dictt.get(a, 0)+1

print(ans)
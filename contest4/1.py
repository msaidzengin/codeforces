q = int(input())
inp = []
for i in range(q):
    input()
    inp.append(set(map(int, input().split())))


for s in inp:
    print([1, 2][any(e - 1 in s for e in s)])
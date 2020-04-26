from collections import Counter

q = int(input())
inp = []
for i in range(q):
    n = int(input())
    inp.append(input().split(" "))

for inpp in inp:
    count = Counter(inpp)
    vals = list(count.values())
    searchval = list(count.keys())[0]
    ii = [i for i, x in enumerate(inpp) if x == searchval]
    enaz = 999999
    if len(ii) == 1:
        print("-1")
    else:
        for i in range(len(ii)-1):
            if ii[i+1] - ii[i] < enaz:
                enaz =  ii[i+1] - ii[i]
        print(enaz+1)
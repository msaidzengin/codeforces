n = int(input())
for i in range(n):
    a,b,c,d,k=map(int,input().split())
    a = (a+c-1)//c
    b = (b+d-1)//d
    if (a + b) <= k:
        print(a,b)
    else:
        print(-1)
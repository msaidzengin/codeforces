for _ in " "*int(input()):
    a,b,c=map(int,input().split())
    d=list(map(int,input().split()))
    i=0;j=c;q=dict()
    for k in range(j):q[d[k]]=q.get(d[k],0)+1
    s=len(q)
    while(i<a-c):
        q[d[i]]=q[d[i]]-1
        q[d[j]]=q.get(d[j],0)+1
        if q[d[i]]<=0:q.pop(d[i])
        s=min(s,len(q))
        i+=1;j+=1
    print(s)
 
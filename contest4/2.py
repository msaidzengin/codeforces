a,b = map(int, input().split())
 

if (a == 9) and (b == 1): 
    print (99, 100)
elif (b - a > 1) or (a > b):   
    print(-1)
elif (a == b):  
    print(a*100, a*100+1)
else:   
    print(a*100+99, b*100)
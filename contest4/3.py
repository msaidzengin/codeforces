for i in range(int(input())):
	n, k, d = list(map(int, input().split()))
 
	ans = 100
	arr = list(map(int, input().split()))
	for i in range(0, (n - d + 1)):
		temp = set(arr[i : i + d])
		ans = min(len(temp), ans)
	print(ans)
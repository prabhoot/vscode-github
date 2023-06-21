def search(arr, x):
	for i in range(len(arr)):
		if arr[i] == x:
			return i
	return -1
arr = list(map(int, input("Enter multiple values: ").split()))  
x=int(input("Enter the number to find"))
i=search(arr,x)
if(i==-1):
	print(str(x)," not found in given array" )
else:
	print(str(x)," found at index ",str(i)," ",end="" )
print(" ")
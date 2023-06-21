def insertionSort(arr):
    if (n := len(arr)) <= 1:
      return
    for i in range(1, n):   
        key = arr[i]
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key

arr = list(map(int, input("Enter multiple values: ").split()))  
print("Given array is:")
print(arr)
i=insertionSort(arr)
print("\nSorted array is after insertion sort:")
print(arr)
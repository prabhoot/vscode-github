# l=list(map(int,input().split()))
# k=int(input())
# i=0
# j=len(l)-1
# count=0
# l=sorted(l)
# print(*l)
# arr=[]
# while(i<j):
#     if(l[i]==k):
#         print("a",l[i])
#         i+=1
#         count+=1
#         continue
#     elif(l[j]==k):
#         print("b",l[j])
#         j-=1
#         count+=1
#         continue       
#     elif(l[i]+l[j]==k):
#         print("c",l[i],l[j])
#         i+=1
#         j-=1
#         count+=1
#         continue
#     elif(l[i]+l[j]<k):
#         print("d",l[i],l[j])
#         i+=1
#         j-=1
#         count+=1
#         continue
#     elif(l[i]+l[j]>k):
#         print("e",l[i],l[j])
#         j-=1
#         count+=1
    
# print(count)

# # 4 2 8 5 1 3 6
# # 8

# # 4 7 9 11 6 8 3
# # 12

# prabhoot
# def my(wt, k):
#     s = sorted(filter(lambda x: x != 0, wt), reverse=True)
#     i, j = 0, len(s) - 1
#     v = 0
#     while i <= j:
#         if s[i] + s[j] <= k:
#             j -= 1
#         i += 1
#         v += 1
#     return v
# wt = list(map(int, input().split()))
# k = int(input())
# ans = my(wt, k)
# print(ans, end="")

def minimum_vehicles(weights, max_limit):
    # Filter out zero weights and sort the remaining weights in descending order
    sorted_weights = sorted(filter(lambda x: x != 0, weights), reverse=True)

    left, right = 0, len(sorted_weights) - 1
    vehicles = 0

    while left <= right:
        if sorted_weights[left] + sorted_weights[right] <= max_limit:
            right -= 1
        left += 1
        vehicles += 1

    return vehicles

# Example usage:
weights = list(map(int, input().split()))
max_limit = int(input())

result = minimum_vehicles(weights, max_limit)
print(result, end="")


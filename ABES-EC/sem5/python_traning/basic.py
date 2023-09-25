# for i in range(-1,-5,-1):
#     print(i)
# start,end=map(int,input().split())
# for i in range(start,end,2):
#     print(i,end=(" "))

# a=int(input())
# str=input()
# a=5
# str='quick'
# my_list=list(map(int,input().split()))
# for i in my_list:
#     print(i,end=str)
# arr=input().split()
# print(*arr,sep=str,end="hello")

# start,end=map(int,input().split())
# for i in range(start,end,3):
#     print(i,end="*")

# mylist=list()
# for i in range(3):
#     str=input()
#     mylist.append(str)
# print(*mylist)

# mylist=[1,3,4,5]
# mylist.append(8)
# mylist.insert(5,9)
# mylist.extend([10])
# print(*mylist)

# n=int(input())
# mylist=list()
# for i in range(n):
#     str=int(input())
#     mylist.append(str)

# print(sum(mylist),max(mylist),min(mylist))

# n,m=map(int,(input().split()))
# mylist=list()
# for i in range(n):
#     mylist=list(map(int,input().split()))
#     print(sum(mylist),max(mylist),min(mylist))

# 3 4
# 10 11 15 16 
# 17 15 20 12
# 22 25 28 19

# n=int(input())
# for i in range(n):
#    num,str=input().split()
#    if(str=="int"):
#     mylist=list(map(int,input().split()))
#     print(sum(mylist))
#    else:
#     mylist=list(input().split())
#     print(len(max(mylist)))
# A basic code for matrix input from user

# R = int(input("Enter the number of rows:"))
# C = int(input("Enter the number of columns:"))
# matrix = []
# print("Enter the entries rowwise:")
# for i in range(R):		
# 	a =[]
# 	for j in range(C):
# 		a.append(int(input()))
# 	matrix.append(a)
# for i in range(R):
# 	for j in range(C):
# 		print(matrix[i][j], end = " ")
# 	print()

for i in range(3):
    count=0
    for j in range(i,3):
      count+=1
    print(count)
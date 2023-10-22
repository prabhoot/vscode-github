# n,m=map(int,input().split())
# l1=list(map(int,input().split()))
# l2=list(map(int,input().split()))
# ans=[]
# for i in l2:
#     count=0
#     for j in l1:
#         if j>i:
#             count+=1
#     ans.append(count)
# print(*ans)

# n,m=map(int,input().split())
# l1=input()
# l2=input()
# ans=[]
# for i in l1:
#     count=0
#     for j in l2:
#         if j==i:
#             count+=1
#     ans.append(count)
# print(*ans)

# 19 24
# The quick brown fox
# jumps over the lazy dogs


# n,m=map(int,input().split())
# main=[]
# for i in range(n):
#     ans=[]  
#     temp=[]
#     temp=input().split()
#     for j in temp:
#         ans.append(len(j))
#     main.append(ans)
# for i in range(len(main)):
#     # for j in range(len(main[i])):
#         print(*main[i])


# 3 4
# The quick brown fox jumps
# alpha beta gamma zeta
# quick brown alpha beta

# n,m =map(int,input().split())
# main=[]
# for i in range(n):
#     temp=[] 
#     temp=list(map(int,input().split()))
#     main.append(temp)
# for i in range(len(main)):
#     print(main[0]+main[-1],sum(main[i]))

# n=int(input())
# s=input().split()
# for i in s:
#     print(i[0],i[-1])

n=int(input())
l=input()
print(max(l),ord(max(l)))

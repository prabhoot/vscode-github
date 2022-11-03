# n=int(input())
n=3
for i in range (1,n+1):
    for j in range(1,n+1,i):
        print(' n', end = '')
    if (i>1):
        for j in range (1,n+1,2*i):
            print (' d',end=" ")
    print()
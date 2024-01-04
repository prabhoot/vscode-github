def my(s):
    n=len(s)
    i=n//2-1
    j=i+1
    while(i>0 and j<len(s)):
        if(s[i]!=s[j]):
            print("False")
        return
    i-=1
    j+=1
    print("True")
s=input()
my(s)s=input()
s1=s[:len(s)//2:]
s2=s[len(s)//2::]
p=s1[::-1]+s2[::-1]
if p==p[::-1]:
  print("True")
else:
  print("False")
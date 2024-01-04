def isJumpingNumber(num: int) -> bool:
  temp=num
  arr=[]
  if(num<=10):
    return True
  else:
   while(num>0):
     digit1=num%10
     num//=10
     if(num>=10):
       digit2=num%10
     
     if(abs(digit1-digit2)!=1):
       return False
  return True

def jumpingNumbers(X: int) -> list[int]:
  ans=[]
  for i in range (0,X+1):
    if(isJumpingNumber(i)):
      ans.append(i)
  return ans

X = int(input())
print(*jumpingNumbers(X))

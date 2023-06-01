# a=int(input("enter the base"))
# b=int(input("enter the exponent"))
# result =1
# while b!=0:
#     result*=a
#     b-=1
# print("answer= " + str(result))

# def power (a , b):
#     if(b==0):
#         return 1
#     else:
#         return a*power(a,b-1)
#     return 0
# a=int(input("enter the base"))
# b=int(input("enter the exponent"))
# print(power(a,b))

# q1 = write a python program to find a square of a number (newton's method) and exponentation (power of a number).

# q2 = to write a python program find the maximum of list of numbers and to find first n prime number.

# Python3 implementation of the approach

# Function to return the square root of
# a number using Newtons method
def squareRoot(n, l) :

	# Assuming the sqrt of n as n only
	x = n

	# To count the number of iterations
	count = 0

	while (1) :
		count += 1

		# Calculate more closed x
		root = 0.5 * (x + (n / x))

		# Check for closeness
		if (abs(root - x) < l) :
			break

		# Update root
		x = root

	return root

# Driver code
if __name__ == "__main__" :

	n = 327
	l = 0.00001

	print(squareRoot(n, l))
    
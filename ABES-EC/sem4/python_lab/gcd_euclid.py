# Function to calculate the GCD using the Euclidean algorithm
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Take user input for the numbers
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Calculate the GCD
result = gcd(num1, num2)

# Display the result
print("The GCD of", num1, "and", num2, "is", result)

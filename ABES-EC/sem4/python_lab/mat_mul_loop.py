# Take user input for matrix dimensions
rows_A = int(input("Enter the number of rows for matrix A: "))
cols_A = int(input("Enter the number of columns for matrix A: "))
rows_B = int(input("Enter the number of rows for matrix B: "))
cols_B = int(input("Enter the number of columns for matrix B: "))

# Create empty nested lists for matrix elements
A = []
B = []

# Take user input for matrix A
print("Enter matrix A elements:")
for i in range(rows_A):
    row = []
    for j in range(cols_A):
        element = int(input(f"Enter element A[{i}][{j}]: "))
        row.append(element)
    A.append(row)

# Take user input for matrix B
print("Enter matrix B elements:")
for i in range(rows_B):
    row = []
    for j in range(cols_B):
        element = int(input(f"Enter element B[{i}][{j}]: "))
        row.append(element)
    B.append(row)

# Perform matrix multiplication using loops
C = []
for i in range(rows_A):
    row = []
    for j in range(cols_B):
        element = 0
        for k in range(cols_A):
            element += A[i][k] * B[k][j]
        row.append(element)
    C.append(row)

# Display the result
print("Matrix C (A * B):")
for row in C:
    print(row)

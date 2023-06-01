import numpy as np

# Take user input for matrix dimensions
rows_A = int(input("Enter the number of rows for matrix A: "))
cols_A = int(input("Enter the number of columns for matrix A: "))
rows_B = int(input("Enter the number of rows for matrix B: "))
cols_B = int(input("Enter the number of columns for matrix B: "))

# Create empty numpy arrays for matrix elements
A = np.empty((rows_A, cols_A))
B = np.empty((rows_B, cols_B))

# Take user input for matrix A
print("Enter matrix A elements:")
for i in range(rows_A):
    for j in range(cols_A):
        A[i][j] = float(input(f"Enter element A[{i}][{j}]: "))

# Take user input for matrix B
print("Enter matrix B elements:")
for i in range(rows_B):
    for j in range(cols_B):
        B[i][j] = float(input(f"Enter element B[{i}][{j}]: "))

# Perform matrix multiplication using numpy's matmul() function
C = np.matmul(A, B)

# Display the result
print("Matrix C (A * B):")
print(C)

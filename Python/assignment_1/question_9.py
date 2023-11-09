def transpose_matrix(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i + 1, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]


try:
    n = int(input("Enter the size of the square matrix: "))
except ValueError:
    print("Invalid input. Please enter an integer for matrix size.")
    exit()

matrix = [[int(input(f"Enter element for row {i + 1} and column {j + 1} of the matrix: "))
        for j in range(n)] for i in range(n)]

transpose_matrix(matrix)

print("Transposed Matrix:")
for row in matrix:
    print(row)

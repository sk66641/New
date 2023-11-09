i = int(input("Enter the number of rows of matrice 1: "))
j = int(input("Enter the number of columns of matrice 1: "))
k = int(input("Enter the number of rows of matrice 2: "))
l = int(input("Enter the number of columns of matrice 2: "))

if j != k:
    print("Multiplication of matrices cannot be determined.")
else:
    matrice1 = []
    matrice2 = []
    multiplication = 0

    for row in range(i):
        matrice1.append([])
        for col in range(j):
            element = int(input(f"Enter the element of row {row + 1} and col {col + 1} of matrice 1: "))
            matrice1[row].append(element)

    for row in range(k):
        matrice2.append([])
        for col in range(l):
            element = int(input(f"Now, Enter the element of row {row + 1} and col {col + 1} of matrice 2: "))
            matrice2[row].append(element)

    print("Multiplication of matrice 1 and matrice 2 :")
    for row in range(i):
        for row1 in range(l):
            sum = 0
            for col1 in range(j):
                multiplication = matrice1[row][col1] * matrice2[col1][row1]
                sum = sum + multiplication
            print(sum, end=" ")
        print()



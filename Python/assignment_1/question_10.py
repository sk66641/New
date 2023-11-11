n = int(input("Enter the number of rows or cols: "))
for i in range(n):
    for j in range(n):
        value = min(i, j)
        value = min(value, n - i - 1)
        value = min(value, n - j - 1)
        print(n - 3 - value, end=" ")
    print()



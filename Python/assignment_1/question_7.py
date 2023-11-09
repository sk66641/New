n = int(input("Enter the number of rows: "))
i = 1
while i <= n:
    j = 2 * n - 1
    while j > 2 * i - 2:
        print("*", end="")
        j -= 1
    print()
    i += 1



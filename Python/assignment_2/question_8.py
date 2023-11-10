n = int(input("Enter the value of n: "))
for x in range(1, 11):
    for y in range(1, n+1):
        print(y, "x", x, '=', y*x, end=' , ')
    print('')

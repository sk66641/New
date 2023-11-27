# Accept the limit and print the strong numbers from 1 to the given limit.
limit = int(input('Enter limit:'))
for j in range(1, limit+1):
    F = 1
    for i in range(1, j+1):
        F = F*i
    print('@Factorial of', j, ':', F)
    S = 0
    while F != 0:
        N = F % 10
        S = S+N
        F //= 10
    print("Sum of digits of it's factorial:", S)
    if j == S:
        print(j, 'is strong.')

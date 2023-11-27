# Find number is Strong or not
# If the sum of the factorial of the digits in a number is equal to the original number, the number is a strong number.
n = int(input('Enter limit:'))
F = 1
S = 0
for i in range(n, 1, -1):
    F = F*i
print('Factorial: ', F)
while F != 0:
    N = F % 10
    S = S+N
    F //= 10
print("Sum of digits of it's factorial: ", S)
if n == S:
    print(n, 'is Strong.')

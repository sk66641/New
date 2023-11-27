# Write a program to find whether a given number is prime or not
num = int(input("Enter a number to check if it is prime or not:"))
for i in range(2, (num//2)+1):
    if num % i == 0:
        print(num, 'is not prime.')
        break
if num % i != 0:
    print(num, 'is prime.')

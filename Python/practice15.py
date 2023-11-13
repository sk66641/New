# Write a program to take numbers from the user until he enter 0 as input, then print Sum of all entered number.
Sum = 0
num = int(input('Enter the number:'))
while num != 0:
    Sum = Sum+num
    num = int(input('Enter the number:'))
print(Sum)

from math import log10
num = int(input("Enter the number:"))
digits = int(log10(num))
print(digits)
print("first digit: ", num//(10**digits))
print("last digit: ", num % 10)

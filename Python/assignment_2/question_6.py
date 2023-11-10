from math import log10
num=int(input("Enter the number:"))
digits=int(log10(num))
last_digit=num%10
first_digit=num//(10**digits)
middle_digits=(num//10)%(10**(digits-1))
print(last_digit,end='')
print(middle_digits,end='')
print(first_digit,end='')


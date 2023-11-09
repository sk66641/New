num = int(input("Enter a number to find it's sum of digits: "))
remainder=0
sum=0
while num != 0:
    remainder = num % 10
    sum = sum+remainder
    num=num//10
print("sum of it's digits is:",sum)

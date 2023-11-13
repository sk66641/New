summation = 0
for x in range(1, 11):
    num = float(input("Enter number %d: " % x))
    summation = summation+num
print("summation:", summation)
print("Average:", summation/10)

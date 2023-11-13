# calculation of given sum: (1/1!)+(2/2!)+(3/3!).........
limit=int(input("Enter limit: "))
Sum=1
for i in range(1,limit+1):
    F=1
    for j in range(1,i+1):
        F=F*j
    Sum=Sum+i/F
print(Sum)
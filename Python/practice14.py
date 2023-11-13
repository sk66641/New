# Print all even numbers between n to m. m should be greater than n.
n=int(input('Enter the value of n:'))
m=int(input('Enter the value of m:'))
if n%2==0:
    for i in range(n+2,m,2):
        print(i)
else:
    for i in range(n+1,m,2):
        print(i)

# Find all even numbers from 0 to n. where, n is given by user.
n=int(input('Enter the value of n:'))
if n%2==0:
    for i in range(0,n+2,2):
        print(i)
else:
    for i in range(0,n,2):
        print(i)

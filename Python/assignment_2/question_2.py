print("Enter the value of a,b and c of the quadratic equation:")
a = int(input('a='))
b = int(input('b='))
c = int(input('c='))
D = (b**2)-(4*a*c)
if D >= 0:
    print('root_1:', (-b+(D**0.5))/(2*a))
    print('root_2:', (-b-(D**0.5))/(2*a))
else:
    d = -D
    print('root_1:', complex(-b/(2*a), (d**0.5)/(2*a)))
    print('root_2:', complex(-b/(2*a), -(d**0.5)/(2*a)))

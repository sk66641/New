a=int(input('enter a:'))
b=int(input('enter b:'))
c=int(input('enter c:'))
print(x)
if a>=b and b>=c:
    
    print(a,'is greatest.')
elif b>a and b>c:
    print(b,'is greatest.')
elif c>a and c>b:
    print(c,'is greatest.')
elif a==b==c:
    print('all are equal')
elif a==b:
    if a>c:
        print(a,'is greatest.')
    else :
        print(c,'is greatest.')
elif b==c:
    if b>a:
        print(b,'is greatest.')
    else :
        print(a,'is greatest.')
elif a==c:
    if a>b:
        print(a,'is greatest.')
    else :
        print(b,'is greatest.')
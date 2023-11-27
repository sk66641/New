# max between three numbers
print('Enter three numbers.')
a = int(input('a='))
b = int(input('b='))
c = int(input('c='))
# if a > b:
#     if a > c:
#         print(a, 'is the greatest number.')
#     else:
#         print(c, 'is the greatest number.')
# elif b > c:
#     print(b, 'is the greatest number.')
# else:
#     print(c, 'is the greatest number.')
if a > b and a > c:
    print(a, 'is the greatest number.')
elif a > b or b <= c:
    print(c, 'is the greatest number.')
else:
    print(b, 'is the greatest number.')
# if a>b and a>c:
#     max=a
# elif b>a and b>c:
#     max=b
# else:
#     max=c
# print(max,'is the greatest number.')

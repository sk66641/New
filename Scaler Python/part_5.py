print("#function")
def greet():
    print("Hello")
greet()

print("#docstrings")
#  It is used to document the purpose and functionality of the code object.
def greet():
    """Greetings"""
    print("Hello")
greet()

print("#parameters and arguments")
def add(a,b):
    print(a+b)
add(1,2)

print("#return")
def add(a,b):
    print(a+b)
print(type(add(1,2)))
print(type(print("type of print is nonetype")))
def add(a,b):
    return a+b
print(add(1,2),type(add(1,2)))
def add(a,b):
    print("add")
    return a+b
print(add(1,2))
d=add(1,2)
print(d)

print("#returning multiple values")
def address(country,state,district):
    return country,state,district
a,b,c=address("india","bihar","nalanda")
print(a,b,c)
d=address("india","bihar","nalanda")
print(d,type(d))

print("#scope of a variable")
# global
x=2
def scope():
    # y is a local variable to this function
    y=3
    print(y)
scope()
print(x)
# print(y)

print("#changing to global")
x=2
def scope():
    global x
    x=7
    print(x)
print(x)
scope()
print(x)

print("#lambda function")
def add(a,b):
    return a + b
print(add(1,2))
print((lambda a,b:a+b)(5,2))
z=lambda a,b:a+b
print(z(7,3),type(z))
# another example
def smaller(a,b):
    if a < b:
        return a
    else:
        return b
print(smaller(56,55))
print((lambda a,b:a if a < b else b)(3,4))
print((lambda a,b:min(a,b))(3,4))
larger=lambda a,b:a if a < b else b
print(larger(56,50))
# more examples
lst=[(45,4),(2,5),(23,6),(67,7)]
lst.sort()
print(lst)
def srt(k):
    return k[1]
lst.sort(key=srt)
print(lst)
lst.sort(key=lambda x:x[1])
print(lst)
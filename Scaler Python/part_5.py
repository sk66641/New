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

print("#printing all even numbers from a given list using python function")
lst=[1,14,13,57,6,89,8]
print(lst)
def get_even(l):
    return [i for i in l if i%2==0]
print(get_even(lst))

print("#write a python function that takes a list and returns a new list with unique elements of the first list")
lst=[25,2,4,56,25,4,8]
def get_unique(li):
    return list(set(li))
print(lst)
print(get_unique(lst))
# another method
def get_unique(li):
    new_li=[]
    for i in li:
        if i not in new_li:
            new_li.append(i)
    return new_li
print(lst)
print(get_unique(lst))

print("#write a python function that takes a list and returns a new list with elements having count 1")
def get_unique(li):
    return [i for i in li if li.count(i)==1]
print(lst)
print(get_unique(lst))

print("#default arguments")
def intro(name,age="18"):
    print("my name is ",name)
    print("my age is ",age)
intro("sanu")
intro("mahesh",25)

# print("#default follows non-default otherwise it'll give an error")
# def intro(name="sanu",age):
#     print("my name is ",name)
#     print("my age is ",age)
# intro(18)

print("#arbitary arguments")
# when number of values you want to pass is not known.
# The values are being stored in tuple.
def arg(*args):
    print(args,type(args))
    for i in args:
        print(i*2,end=" ")
arg(2,3,"sanu ",True,"kumar")

print("#keyword arguments")
# it stores the data in dictionary format
def dic(**kwargs):
    print(kwargs,type(kwargs))
    for i in kwargs:
        print(i,kwargs[i],sep=" : ")
    for k,v in kwargs.items():
        print(k,v,sep=" : ")
dic(name="sanu",age="18",state="bihar")
# kwargs follow args otherwise it will give an error
def mix(name,state,age="18",*args,**kwargs):
    print(name,age,state,kwargs,args,sep=" , ")
mix("sanu","bihar")
mix("sanu","bihar",25)
mix("sanu","bihar",25,5,4,8,district="nalanda",hobby="sleeping")
import keyword
print("#keywords and identifiers")
# get all keywords
kw = dir(keyword)
print(kw, type(kw), len(kw), sep="\n")
print(keyword.kwlist, type(keyword.kwlist), len(keyword.kwlist), sep="\n")
# we can not use special symbols as identifiers like !,@,#,$,%,etc

print("#statements")
# less understandable, not a good practice
if 3 > 2:
    print("hello")
    print("3+2")
# more understandable
if 3 > 2:
    print("hello")
    print(3+2)
# multi-line statements
a = 1+2+3\
    + 4+5+6 +\
    7+8+9
print(a)
# or
a = (1+2+3
     + 4+5+6 +
     7+8+9)
print(a)
a = 1
b = 2
c = 4
print(a, b, c)
# multiple assignments
a, b, c = 1, 2, 4
print(a, b, c)

print("#variables and data types in python")
a = 2+1j
print(isinstance(a, complex))
print(type(a))

print("#output formatting")
print("my name is {name} and my age is {age}".format(age=18, name="sanu"))
name = "sanu"
age = 18
print("my name is {} and my age is {}".format(age, name))
print("my name is {1} and my age is {0}".format(age, name))
print(f"my name is {name} and my age is {age}")

print("#operators")
# identity operators
a = 2
b = 2
print(a is b)
print(a is not b)
s1 = "sanu"
s2 = "sanu"
print(s1 is s2)
# it doesn't work with list
l1 = [2, 3, 4]
l2 = [2, 3, 4]
print(l1 is l2)
# memebership operators
# they are used to test whether a value or variable is found in a sequence(string, list, tuple, set and dictionary)
print(5 in l1)
print(5 not in l1)

print("#control flow")
# 0, None, False is considered as False in python and everything else is considered as True
if 0 or None or False:
    print("true")
else:
    print("false")

print("#checking if a number is prime or not and printing the number by which the given number is divisible if it's not prime")
n = 21
isDivisible = False
for i in range(2, n):
    if n % i == 0:
        isDivisible = True
        print(f"{n} is divisible by {i}.")
if isDivisible:
    print(f"{n} is a prime number.")
else:
    print(f"{n} is not a prime number.")

print("#for loop")
# for loop with else
num=[14,67,34,"sanu",18]
for i in num:
    print(i)
else:
    print("no item left")

print("#printing prime numbers between two given numbers")
start=20
end=50
for i in range(start+1,end):
    for j in range(2,i//2):
        if i % j == 0:
            break
    if i % j != 0:
        print(i)

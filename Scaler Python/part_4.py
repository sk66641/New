print("#data structures")

print("#list")
# creating an empty list
l = []
l = list()
# lists are ordered , mutable ,iterable and can contain different data types
l = list(range(2, 8, 2))
print(type(l))

print("#list operations")
lis = [2, 45, 1, 45, 6, 3, 9, "sanu", "kumar"]
print(lis[::])
print(lis[::-1])
print(lis[7][0], lis[7][1], sep="@")
# count returns the count of an element
print(lis.count(45))
print(lis.index("sanu"))
# pop removes and returns the last element of a list
print(lis.pop())
print(lis)
lis.remove("sanu")
print(lis)
lis.sort()
print(lis)
lis.insert(0, "sanu")
print(lis)
lis.append(l)
print(lis)
# extend first iterates on the object and then add it to the last one by one
lis.extend(l)
print(lis)

print("#heterogeneous list")
# with different data types
li = [0, 1, "sanu", "kumar", True, False]
print(type(li[-1]))

print("#2-D list")
l1 = [[1, 2, 3], [[0, 4, 0], 5, [0, 6, 0]], [7, 8, 9]]
l1[1][0].sort()
l1[1][2].sort()
print(l1)

print("#iteration")
for i in l1:
    for j in i:
        print(j)

print("#list comprehension")
# method 1
l2 = []
for i in range(10):
    l2.append(i**2)
print(l2)
# method 2
l3 = [i**2 for i in range(10)]
print(l3)
# adding all the elements of the list
add = 0
for i in l3:
    add += i
print(add)

print("#list unpacking")
a, b, c = l
print(a, b, c)

print("#list concatenation and multiplication")
print(l+lis)
print(l*2)

print("#tuple")
# creating empty tuple
t = ()
t = tuple()
# lists are ordered , unmutable, iterable and can contain different data types
# for creating tuple having single element, you will have to add "," at the end
t = (2)
print(type(t))
t = (2,)
print(type(t))
t = tuple("sanu")
print(t)
t = ([1, 2, 3], "kumar", 45)
print(len(t), type(t[0]), type(t[1]), type(t[2]))

print("#mutability inside tuple")
t[0].append([4, 5])
t[0].extend([4, 5])
print(t)

print("#tuple unpacking")
t = tuple(range(2, 10, 2))
a, b, c, d = t
print(a, b, c, d)

print("#tuple operations")
print(t)
print(t.count(5))
print(t.index(4))

print("#tuple concatenation and multiplication")
t1 = (1, 2, 3)
t2 = (4, 5)
print(t1+t2)
print(t1*2)

print("#tuple to list and list to tuple")
# useful if you want to perform all the operations on tuple
print(t, type(t))
l = list(t)
print(l, type(l))
l.remove(8)
print(l, type(l))
t = tuple(l)
print(t, type(t))

print("#dictionary")
# creating an empty dictionary
d = {}
d = dict()
# dictionaries are ordered in higher version of python, mutable, iterable and can contain different data types
fruits = {"apple": 120, "orange": 80, "banana": 150}
print(fruits, type(fruits))
# zip method
name = ["apple", "orange", "banana"]
prices = [120, 80, 150]
fruits = dict(zip(name, prices))
print(fruits, type(fruits))

print("#accessing data in dictionary")
# dictionaries have keys and values instead of indexes
print(fruits)
print(fruits["banana"])
# what if we try to access the key which is not present in the dictionary
# key error
# print(fruits["pineapple"])
# we can use get method to avoid error
print(fruits.get("pineapple"))
# instead we can print whatever we want if the key is not present
print(fruits.get("pineapple", "not available"))

print("#updating dictionary")
# updating existing value
print(fruits)
fruits["banana"] = {"small": 130, "large": 150}
print(fruits)
# updating with new value
fruits["pineapple"] = 100
print(fruits)
# update
new = {"mango": 180, "graphes": 160}
fruits.update(new)
print(fruits)

print("#check element availability")
print("apple" in fruits)

print("#deletion operations")
fruits.pop("apple")
print(fruits)
# popitem removes and returns last element of a dictionary
print(fruits.popitem())
print(fruits)
# del fruits
# print(fruits)

print("#iteration in dictionary")
# method 1
for i in fruits:
    print(i, fruits[i])
# method 2
print(fruits.items())
for key, value in fruits.items():
    print(key, value)

print("#string methods")

print("#capitalize")
name = "sanu kumar"
print(name.capitalize())
print(name.title())
print(name.upper())
print(name.lower())
print(name.find("a"))
print(name.find("t"))
print(name.count("a"))
print(name.index("a"))
# The main difference between find and index is how they handle the case when the substring or character is not found. The find method returns -1, while the index method raises a ValueError exception. This means that find is safer to use if you are not sure whether the substring or character exists in the string, while index is more suitable if you want to catch the error and handle it accordingly.Another difference is that find is only available for strings, while index can be used for other sequence types, such as lists and tuples.
# print(name.index("t"))
print(name.replace("a", "s"))
print(name.replace("nu", "s"))
print(name.split())
print(name.split("a"))
print(name.islower())
print("SANU".isupper())
print("4587".isnumeric())
print(name.isalpha())
print("Sanu".isalpha())

print("#string formatting")
name = "sanu"
age = 18
print("my name is", name, "and age is", age)
print("my name is {} and age is {}".format(name, age))
# more advance
print(f"my name is {name} and age is {age}")

print("#string concatenation")
first = "sanu"
last = "kumar"
print(first+last+first+last)
print((first+last)*2)

print("#printing all vowels from: the quick brown fox jumps over the lazy dog")
string = "the quick brown fox jumps over the lazy dog"
for i in string:
    if i in "aeiou":
        print(i, end="")
print()

print("#find if a string is pallindrome or not")
# using string slicing
string = input()
if string == string[::-1]:
    print(string, "is a pallindrome.")
else:
    print(string, "is not a pallindrome")
print("#another method")
string = input()
j = 0
for i in string:
    j += 1
    if i != string[-j]:
        break
print(j)
if j != len(string):
    print("Not a pallindrome")
else:
    print("pallindrome")

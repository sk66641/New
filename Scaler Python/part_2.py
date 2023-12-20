print("#printing multiple values using print function")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister')

print("#default sep and end in print")

print("#changing default seperator in print")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep="", end="")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep=",")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep="->")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep="\n")

print("#changing default end in print")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep=",", end="@")
print("sanu", 'anu', 'age', 18, 14, 'relation', 'sister', sep="->", end="#")
print()

print("#string concatenation")
first_name = "sanu"
last_name = "kumar"
print(first_name+last_name)
print(first_name*3+last_name*3)

print("#floor division")
# in floor division , the result is floored to the nearest smallest integer
print(5//4)
print(-9//4)

print("#membership operators")
name = "sanu kumar"
print('a' in name)
print('uma' in name)
print('mau' in name)

print("#is operator")
# it gives a boolean value True if both the objects are at same memory location otherwise False
a = 5
b = 5
print(id(a), id(b))
print(a is b)
a = 53
b = 59
print(id(a), id(b))
print(a is b)

print("#range function")
# by default start is 0 and jump is +1
print(list(range(a, b)))
print(list(range(b, a)))
print(tuple(range(a, b)))
print(set(range(a, b)))

print("#ord and chr in python")
# ord() returns the ASCII value of a single character while chr() returns the character that represents the specified unicode.
print(ord('a'))
print(chr(97))

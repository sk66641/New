print("#id function")
x = 5
print(id(x))

print("#data types")

print("#booleans")
b = 0
print(type(b))
print(bool(b))
b = True
print(type(b))
print(int(b))
print(b)

print("#range")
print(type(range(10)))
a, b, c = range(0, 6, 2)
print(a, b, c)

print("#Multi line string")
print("""sanu
        kumar""")
print('''sanu
        kumar''')

print("#None")
b = None
print(type(b))
print(b)

print("#input")
x = input("x:")
# by default it will take input as a string
y = input("y:")
print(x+y)

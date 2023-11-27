x=[10,20,30,40,50]
print(x)
print(x[:])
x[1:4]=[60,70,80]
print(x)
x.extend([90,100])
print(x)
del x[1:4]
print(x)
# it will print the last element
print("!!!")
print(x.pop())
print(x)
print(x.pop(2))
print(x)
print(x.pop(1))
print(x)
x.clear()
print(x)
print("!!!")
print('10' in x)
print("!!!")
colours = ["red", "green", "blue", "green", "yellow", "white"]
print(colours.index("green"))
print(colours.index("green", 2))
print(colours.index("green", 2,5))
print(colours.index("black"))

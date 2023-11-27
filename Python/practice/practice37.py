# Invoking Functions
def hello():
    print("Hello")
    print("Programming is fun!")
hello()
# Invoking a function without parentheses will NOT generate an error, but rather the location (address) in computer memory where the function definition has been stored
def hello():
    print("Hello")
    print("Programming is fun!")
hello
print('@@@')
def hello(person):
    print("Hello " + person)
    print("Programming is fun!")
hello("RGIPT")
print("@@@")
def hello(person, course):
    print("Hello " + person + " from" + course)
    print("Programming is fun!")
hello("RGIPT", " 15-110")
print("@@@")
def print_func(i, j = 100):
        print(i, j)
print_func(10, 20)
print("@@@")
def print_func(i, j = 100):
        print(i, j)
print_func(10)
print("@@@")
def print_func(i, j = 100):
        print(i, j)
print_func()








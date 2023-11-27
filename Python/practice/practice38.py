# print("#Local Variables")
# def func1(x, y):
#         z = 4
#         print(x, y, z)
# func1(2, 3)
# print(x, y, z)
print("#Global Variables")
x = 100
def func2():
        print(x)
func2()
print(x)
print("#Local vs. Global Variables")
x = 100
def func3():
        x = 20
        print(x)
func3()
print(x)
print("#Parameters vs. Global Variables")
x = 100
def func4(x):
        print(x)
func4(20)
print(x)
print("#The global Keyword")
def func5():
        global x
        x = 20
        print(x)
func5()
print(x)


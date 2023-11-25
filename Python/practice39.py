def power(x, y):
    return x**y


print("Enter the value of x and y to get the value of x raised to power y.")
x = int(input("x="))
y = int(input("y="))
print(power(x, y))
print("#Pass By Value")


def addInterest(balance, rate):
    newBalance = balance * rate
    balance = newBalance


def test():
    amount = 1000
    rate = 0.05
    addInterest(amount, rate)
    print(amount)


test()
1000

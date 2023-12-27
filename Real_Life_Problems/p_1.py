price = float(input("Enter price: "))
cash_balance = float(input("Enter cash_balance: "))
def result(price, cash_balance):
    quantity = 0
    while quantity*price <= cash_balance:
        quantity += 1
    print(quantity)
result(price, cash_balance)

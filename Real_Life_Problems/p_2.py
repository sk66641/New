wallet_amount = int(input("Enter wallet_amount: "))
get_amount = int(input("Enter get_amount: "))


def wallet_info(wallet_amount, get_amount):
    withdraw_amount = (get_amount*100)/67
    if int(withdraw_amount) != withdraw_amount:
        withdraw_amount = int(withdraw_amount)+1
    else:
        withdraw_amount = int(withdraw_amount)
    print("withdraw_amount: ", withdraw_amount)
    remaining_amount = wallet_amount-withdraw_amount
    print("remaining_amount: ", remaining_amount)
    min_get_amount = 0
    while remaining_amount >= 25:
        value = int(remaining_amount * 0.67)
        min_get_amount = min_get_amount + value
        remaining_amount = int(remaining_amount * 0.27)
    print("min_get_amount: ", min_get_amount)


wallet_info(wallet_amount, get_amount)

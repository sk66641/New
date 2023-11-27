ch = input('Please enter any number:')
first_digit = ch[0]
last_digit = ch[-1]
length = len(ch)
print(last_digit, end='')
for i in range(1, length-1):
    print(ch[i], end='')
print(first_digit)

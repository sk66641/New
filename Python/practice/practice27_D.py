n = int(input("enter the number\n"))
row = 1
while row <= n:
    col = 1
    while col <= row:
        ch = chr(ord('D') - row + col)
        print(ch, end=" ")
        col += 1
    print()
    row += 1
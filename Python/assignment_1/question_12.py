def main():
    n = int(input("Enter the value of 'n' :"))
    arr = []
    print("Enter", n, "distinct numbers taken from 0 to n:")
    for i in range(n):
        arr.append(int(input()))
    sum2 = sum(arr)
    sum1 = n * (n + 1) * 0.5
    if sum1 == sum2:
        print("Missing number is 0.")
    else:
        print("Missing number is", sum1 - sum2)

if __name__ == "__main__":
    main()



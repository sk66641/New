# Find first 100 prime numbers start from 2
n = 2
count = 1
N = int
i=int
U=n//2
while count <= 10:
    for i in range(2, U+1):
        print(n)
        N = n % i
        if N == 0:
            break
    # if N != 0:
    #     print(i)
    count += 1
    n += 1

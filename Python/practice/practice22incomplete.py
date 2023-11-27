# Find all prime numbers between given two numbers
print('Enter two numbers to find all prime numbers between them:')
num_1 = int(input("num_1 = "))
num_2 = int(input("num_2 = "))
N = float
if num_1 < num_2:
    for i in range((num_1)+1, num_2):
        for j in range(2, (i//2)+1):
            N = i % j
            if N == 0:
                break
        if N != 0:
            print(i, end=',')
else:
    for i in range((num_2)+1, num_1):
        for j in range(2, (i//2)+1):
            N = i % j
            if N == 0:
                break
        if N != 0:
            print(i, end=',')
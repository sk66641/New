# Function to print the pattern
def print_pattern(n):
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            print(max(n - min(i, j, n - i + 1, n - j + 1) + 1, 1), end=" ")
        print()

# Call the function with the desired size of the pattern (in this case, 7x7)
print_pattern(7)

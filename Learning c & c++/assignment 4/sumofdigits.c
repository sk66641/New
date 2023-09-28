#include <stdio.h>
int main()
{
    int n, sum = 0, remainder;
    printf("Enter any number:");
    scanf("%d", &n);
    int i = n;
    while (i != 0)
    {
        remainder = i % 10;
        sum = remainder + sum;
        i = i / 10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}
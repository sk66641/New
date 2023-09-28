
#include <stdio.h>
#include <math.h>
int main()
{
    int num, firstDigit, lastDigit, digits;
    printf("Enter num\n");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = log10(num);
    firstDigit = (num / pow(10, digits));
    printf("first digit = %d\n", firstDigit);
    printf("last digit = %d\n", lastDigit);
    return 0;
}
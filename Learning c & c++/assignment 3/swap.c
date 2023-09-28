#include <stdio.h>
#include <math.h>
int main()
{
    int num, swappednum;
    int firstDigit, lastDigit, digits;
    printf("Enter num\n");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = log10(num);
    firstDigit = (num / pow(10, digits));
    swappednum = lastDigit;
    swappednum *= pow(10, digits);
    swappednum += num % ((int)pow(10, digits));
    swappednum -= lastDigit;
    swappednum += firstDigit;
    printf("Number after swapping first and last digit: %d", swappednum);
    return 0;
}
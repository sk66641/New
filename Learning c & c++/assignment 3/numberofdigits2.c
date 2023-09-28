// method 2
#include <stdio.h>

#include <math.h>
int main()
{
    int num, digits;
    printf("enter num\n");
    scanf("%d", &num);
    digits = log10(num);
    printf("number of digits: %d", digits + 1);
    return 0;
}
#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("%d factorial is: %d", num, factorial);
    return 0;
}
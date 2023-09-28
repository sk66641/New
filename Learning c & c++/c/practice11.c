#include <stdio.h>
int main()
{
    int a=0, b=0, c=0;
    printf("enter three numbers to compare\n");
    scanf("%d %d %d", &a, &b , &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("largest: %d", a);
        }
        else
        {
            printf("largest: %d", c);
        }
    }
    else if (c > b)
    {
        printf("largest: %d", c);
    }
    else
    {
        printf("largest: %d", b);
    }
    return 0;
}
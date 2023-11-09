#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the sides of triangle");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a == b)
    {
        if (b == c)
        {
            printf("equilateral");
        }
        else
        {
            printf("isoscales");
        }
    }
    else if (b == c)
    {
        if (a == c)
        {
            printf("equilateral");
        }
        else
        {
            printf("isoscales");
        }
    }
    else if (a == c)
    {
        if (b == c)
        {
            printf("equilateral");
        }
        else
        {
            printf("isoscales");
        }
    }
    else
    {
        printf("scalene");
    }

    return 0;
}
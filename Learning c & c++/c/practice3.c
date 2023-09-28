#include <stdio.h>

void main()
{
    int a, b, d;
    printf("Enter your last month spending\n");

    scanf("%d", &a);
    printf("Enter your this month spending\n");
    scanf("%d", &d);
    printf("Enter your last month bill\n");
    scanf("%d", &b);
    if (d >= a + 15000 & b >= 10000)
    {
        printf("you have got a bonus of $500\n");
    }
    else
    {
        printf("jaldi hato wahan se\n");
    }
}
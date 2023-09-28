#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three sides of triangle\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
    return 0;
}
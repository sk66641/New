#include <stdio.h>
int main()
{
    int row, col, n;
    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= n - 2; i++)
    {
        printf("*");
        for (int i = 1; i <= (2*n)-3; i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        printf("* ");
    }
    return 0;
}
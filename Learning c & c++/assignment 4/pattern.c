// enter n=7 to get the result
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int row = 1;
    while (row <= (n + 1) / 2)
    {

        int col = 1;
        while (col <= row - 1)
        {
            printf(" ");
            col++;
        }
        int value = 1;
        while (value <= n + 2 - 2 * (row))
        {
            printf("*");
            value++;
        }

        printf("\n");
        row++;
    }
    row = (n - 1) / 2;
    while (row >= 1)
    {
        int col = 1;
        while (col <= row - 1)
        {
            printf(" ");
            col++;
        }
        int value = 1;
        while (value <= n + 2 - 2 * (row))
        {
            printf("*");
            value++;
        }

        printf("\n");
        row--;
    }

    return 0;
}
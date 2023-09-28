#include <stdio.h>
int main()
{
    int row = 1;
    while (row <= 4)
    {
        int col = 1;
        while (col <= row - 1)
        {
            printf(" ");
            col++;
        }
        int value = 1;
        while (value <= 7 + 2 - 2 * (row))
        {
            printf("*");
            value++;
        }
        printf("\n");
        row++;
    }
    row = 3;
    while (row >= 1)
    {
        int col = 1;
        while (col <= row-1)
        {
            printf(" ");
            col++;
        }
        int value = 1;
        while (value <= 7 + 2 - 2 * (row))
        {
            printf("*");
            value++;
        }
        printf("\n");
        row--;
    }
    return 0;
}
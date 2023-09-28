#include <stdio.h>
int main()
{
    int i, row = 1;
    char ch;
    printf("enter your pin\n");
    scanf("%d", &i);
    while (i != 982768)
    {
        printf("re-enter your pin\n");
        scanf("%d", &i);
    }

    int n;
    printf("enter the number\n");
    scanf("%d", &n);

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            ch = 'A' + row + col - 2;
            printf("%c ", ch);

            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
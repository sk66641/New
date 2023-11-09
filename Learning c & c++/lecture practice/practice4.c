#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows or cols");
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int value = i < j ? i : j;
            value = value < n - i - 1 ? value : n - i - 1;
            value = value < n - j - 1 ? value : n - j - 1;
            printf("%d ", n - 3 - value);
        }
        printf("\n");
    }
    return 0;
}

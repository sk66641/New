// approach is nCr
#include <stdio.h>
int main()
{
    int n, i, j, k, l, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int space = 1;
        for (space = 1; space < n - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            int ifactorial = 1;
            for (k = 1; k <= i; k++)
            {
                ifactorial = ifactorial * k;
            }
            int jfactorial = 1;
            for (l = 1; l <= j; l++)
            {
                jfactorial = jfactorial * l;
            }
            int factorial = 1;
            for (m = 1; m <= i - j; m++)
            {
                factorial = factorial * m;
            }
            printf("%d ", ifactorial / (jfactorial * factorial));
        }
        printf("\n");
    }
    return 0;
}

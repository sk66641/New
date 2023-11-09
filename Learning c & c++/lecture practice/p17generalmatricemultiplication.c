#include <stdio.h>
int main()
{
    int i, j, k, l, row = 0, col = 0, row1 = 0, col1 = 0;
    printf("Enter the number of rows of matrice 1: ");
    scanf("%d", &i);
    printf("Enter the number of columns of matrice 1: ");
    scanf("%d", &j);
    printf("Enter the number of rows of matrice 2: ");
    scanf("%d", &k);
    printf("Enter the number of columns of matrice 2: ");
    scanf("%d", &l);
    if (j != k)
    {
        printf("Multiplication of matrices cannot be determined.");
    }
    else
    {

        int matrice1[i][j], matrice2[k][l];
        int multiplication;
        for (row = 0; row < i; row++)
        {
            for (col = 0; col < j; col++)
            {
                printf("Enter the element of row %d  and col %d of matrice 1: ", row + 1, col + 1);
                scanf("%d", &matrice1[row][col]);
            }
        }
        for (row = 0; row < k; row++)
        {
            for (col = 0; col < l; col++)
            {
                printf("Now, Enter the element of row %d  and col %d of matrice 2: ", row + 1, col + 1);
                scanf("%d", &matrice2[row][col]);
            }
        }
        printf("Multiplication of matrice 1 and matrice 2 :\n");
        for (row = 0; row < i; row++)
        {

            for (row1 = 0; row1 < l; row1++)
            {
                int sum = 0;
                for (col1 = 0; col1 < j; col1++)
                {

                    multiplication = matrice1[row][col1] * matrice2[col1][row1];
                    sum = sum + multiplication;
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
    return 0;
}

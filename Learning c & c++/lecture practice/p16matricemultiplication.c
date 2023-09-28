#include <stdio.h>
int main()
{
    int matrice1[3][3], matrice2[3][3];
    int multiplication;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter the element of row %d  and col %d of matrice 1: ", row + 1, col + 1);
            scanf("%d", &matrice1[row][col]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Now, Enter the element of row %d  and col %d of matrice 2: ", row + 1, col + 1);
            scanf("%d", &matrice2[row][col]);
        }
    }
    printf("Multiplication of matrice 1 and matrice 2 :\n");
    for (int row = 0; row < 3; row++)
    {

        for (int row1 = 0; row1 < 3; row1++)
        {
            int sum = 0;
            for (int col1 = 0; col1 < 3; col1++)
            {

                multiplication = matrice1[row][col1] * matrice2[col1][row1];
                sum = sum + multiplication;
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}

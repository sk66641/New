#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            if (j == 3)
            {
                {
                    continue;
                }
            }
            printf("%d %d\n", i, j);
        }
        printf("%d %d\n", i, j);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i;
    printf("odd numbers between 1 and 100\n");
    for (int i = 1; i <= 100; i = i + 2)
    {

        printf("%d\n", i);
    }
    return 0;
}
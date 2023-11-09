#include <stdio.h>
int main()
{
    int i = 1, j = 5;
    for (; ++i <= 10; i++, j--)
    {
        printf("%d\t%d\n ", i, j);
    }
    return 0;
}
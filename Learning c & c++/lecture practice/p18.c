#include <stdio.h>
int main()
{
    int a[] = {2, 4, 2, 4};
    for (int i = 0; i < sizeof(a[i]); i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
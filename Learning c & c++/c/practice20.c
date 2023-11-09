#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case (80...100):
        printf("A");
        break;
    case (70...79):
        printf("B");

    default:
        break;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a = 5;
    printf("%d %d %d\n", a, ++a, a++);
    int b = 10;
    printf("%d %d %d", --b, b++, b, ++b);
    return 0;
}
// conditional operators
#include <stdio.h>
int main()
{
    int a, b, c, smallest = 0;
    printf("enter three different numbers to compare\n");
    scanf("%d %d %d", &a, &b, &c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("smallest: %d", smallest);
    return 0;
}
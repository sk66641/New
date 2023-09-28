#include <stdio.h>
int main()
{
    int a, b, c, largest = 0;
    printf("enter three different numbers to compare\n");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("largest: %d", largest);
    return 0;
}
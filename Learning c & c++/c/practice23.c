#include <stdio.h>
int sum(int a, int b)
{ int
    // printf("%d", a + b);
    difference(a, b);
    return a + b;
}
int difference(int a, int b)
{
    // printf("%d", a + b);
    // sum(a, b);
    return a - b;
}
int main()
{
    int a, b;
    printf("Enter two numbers to get the sum");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", sum(a, b));
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers to find sum , product , difference , quotient and modulus\n");
    scanf("%d %d", &a, &b);
    printf("the sum of two numbers is %d\n", a + b);
    printf("the difference of two numbers is %d\n", a - b);
    printf("the product of two numbers is %d\n", a * b);
    printf("the quotient of two numbers is %d\n", a / b);
    printf("the modulus of two numbers is %d\n", a % b);

    return 0;
}

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Octal equivalent of %d is %o\n", num, num);

    return 0;
}

#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Here we go\n");
    while (b < a)
    {
        printf("%d\n", b+1);
        b = b + 1;
    }
    return 0;
}

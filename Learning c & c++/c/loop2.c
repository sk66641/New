#include <stdio.h>
int main()
{
    int a, index = 0;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Here we go,\n");
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < a);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number to check whether it is even or odd\n");
    scanf("%d", &n);
    switch (n % 2)
    {
        {
        case 0:
            printf("number is even\n");
            break;

        default:
            printf("number is odd\n");
            break;
        }
    }
    return 0;
}
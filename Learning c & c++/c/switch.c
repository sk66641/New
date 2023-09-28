#include <stdio.h>
int main()
{
    int a;
    printf("In which year India got independence.\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1947:
        printf("CORRECT\n");
        break;

    default:
        printf("INCORRECT\n");
        break;
    }

    return 0;
}
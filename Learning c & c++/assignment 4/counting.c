#include <stdio.h>

int main()
{
    int num;
    int count1 = 0, count2 = 0, count3 = 0;
    char ch;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            count1++;
        }
        else if (num < 0)
        {
            count2++;
        }
        else
        {
            count3++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y');

    printf(" positive numbers: %d\n", count1);
    printf(" negative numbers: %d\n", count2);
    printf(" zeros: %d\n", count3);

    return 0;
}

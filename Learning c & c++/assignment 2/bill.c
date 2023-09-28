#include <stdio.h>
int main()
{
    int unit;
    printf("enter your unit here\n");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        float b1 = unit * 0.50 + unit * 0.20;
        printf("Total bill: %f", b1);
    }
    else if (unit > 50 && unit <= 150)
    {
        float b2 = unit * 0.75 + unit * 0.20;
        printf("Total bill: %f", b2);
    }
    else if (unit > 150 && unit <= 250)

    {
        float b3 = unit * 1.20 + unit * 0.20;
        printf("Total bill: %f", b3);
    }
    else if (unit > 250)
    {
        float b4 = unit * 1.50 + unit * 0.20;
        printf("Total bill: %f", b4);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int unit;
    printf("enter your unit here\n");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        float b1 = unit * 0.50;
        printf("Total bill: %f", b1 + b1 * 0.20);
    }
    else if (unit > 50 && unit <= 150)
    {
        float B2 = 50 * 0.50;
        float b2 = (unit - 50) * 0.75;
        printf("Total bill: %f", (B2 + b2) + (B2 + b2) * 0.20);
    }
    else if (unit > 150 && unit <= 250)

    {
        float B2 = 50 * 0.50;
        float B3 = 100 * 0.75;
        float b3 = (unit - 150) * 1.20;
        printf("Total bill: %f", (B2 + B3 + b3) + (B2 + B3 + b3) * 0.20);
    }
    else if (unit > 250)
    {
        float B2 = 50 * 0.50;
        float B3 = 100 * 0.75;
        float B4 = 100 * 1.20;
        float b4 = (unit - 250) * 1.50;
        printf("Total bill: %f", (B2 + B3 + B4 + b4) + (B2 + B3 + B4 + b4) * 0.20);
    }

    return 0;
}

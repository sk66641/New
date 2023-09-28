#include <stdio.h>
int main()
{
    int bs;
    // formula to be used : Gross Salary = Basic Salary + House Rent Allowance + Dearness allowance

    printf("enter your basic salary here\n");
    scanf("%d", &bs);
    if (bs <= 10000)
    {
        float gs1 = bs + bs * 0.20 + bs * 0.80;
        printf("your gross salary is: %f", gs1);
    }
    else if (bs >= 10001 && bs <= 20000)
    {
        float gs2 = bs + bs * 0.25 + bs * 0.90;
        printf("your gross salary is: %f", gs2);
    }
    else if (bs >= 20001)
    {
        float gs3 = bs + bs * 0.30 + bs * 0.95;
        printf("your gross salary is: %f", gs3);
    }
    return 0;
}

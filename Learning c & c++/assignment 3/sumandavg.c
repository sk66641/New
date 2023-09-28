#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    printf("enter ten numbers to find the sum and average of ten numbers\n");
    printf("num 1: \n");
    scanf("%d", &num1);
    printf("num 2: \n");
    scanf("%d", &num2);
    printf("num 3: \n");
    scanf("%d", &num3);
    printf("num 4: \n");
    scanf("%d", &num4);
    printf("num 5: \n");
    scanf("%d", &num5);
    printf("num 6: \n");
    scanf("%d", &num6);
    printf("num 7: \n");
    scanf("%d", &num7);
    printf("num 8: \n");
    scanf("%d", &num8);
    printf("num 9: \n");
    scanf("%d", &num9);
    printf("num 10:  \n");
    scanf("%d", &num10);
    int sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    float average = sum * 0.1;
    printf("the sum is %d and the average is %f", sum, average);
    return 0;
}
#include <stdio.h>
int main()
{

    float r, p = 3.14;
    printf("Enter radius of circle\n");
    scanf("%f", &r);
    printf("Diameter of circle is:%f\n", 2 * r);
    printf("circumference of circle is:%f\n", 2 * p * r);
    printf("area of circle is:%f\n", p * r * r);
    return 0;
}
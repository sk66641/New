#include <stdio.h>

int main()
{
    float c;
    printf("Enter temperature in celsius\n");
    scanf("%f", &c);
    float d = 1.8 * c, f = d + 32;
    printf("%f", f);

    return 0;
}

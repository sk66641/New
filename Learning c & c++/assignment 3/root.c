#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;

    printf("Enter the values of a, b and c of quadratic equation (aX^2 + bX + c):\n");
    scanf("%d %d %d", &a, &b, &c);
    float alpha, beta, complex, D = (b * b) - (4 * a * c);

    switch (D > 0)
    {
    case 1:
        alpha = (-b + sqrt(D)) / (2 * a);
        beta = (-b - sqrt(D)) / (2 * a);
        printf("it has two real distinct roots : %f and %f",
                alpha, beta);
        break;
    case 0:
        switch (D < 0)
        {
        case 1:
            alpha = beta = -b / (2 * a);
            complex = sqrt(-D) / (2 * a);
            printf("it has two distinct complex roots: %f + i%f and %f - i%f",
                    alpha, complex, beta, complex);
            break;
        case 0:
            alpha = beta = -b / (2 * a);
            printf("two equal real roots exists: %f and %f", alpha, beta);
            break;
        }
    }
    return 0;
}
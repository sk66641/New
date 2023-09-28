#include <stdio.h>

int main()
{
    int P, R, T;
    printf("Enter your P,R,T:\n ");
    scanf("%d %d %d", &P, &R, &T);
    float S = P * R * T * 0.01;
    printf("here is your simple interest %f", S);
    return 0;
}

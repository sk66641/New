#include <stdio.h>

int main()
{
    int myAge = 43;

    printf("%d\n", myAge);
    printf("%d\n", *(&myAge));
    // star operator will always give you the value address
    return 0;
}
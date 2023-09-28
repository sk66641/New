#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter the number\n");
    scanf("%d" , &n);
    a=n*(n+1);
    printf("The sum of first %d natural number  is:%d" , n,a/2);
    return 0;
}
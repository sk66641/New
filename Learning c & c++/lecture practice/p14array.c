#include <stdio.h>
int main()
{
    int sum = 0, a[10];
    printf("Enter marks of 10 students\n");
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Average marks of 10 students: %f", sum*0.1);

    return 0;
}
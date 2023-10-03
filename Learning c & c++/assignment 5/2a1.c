#include <stdio.h>
#include <math.h>
int main()
{
    int n,value2, i, value3;
    int value4 = 0;
    printf("enter a binary number");
    scanf("%d", &n);
    int value1=1;
    while (value1!=0)
    {
        for (i = 0; i < 3; i++)
        {
            value2 = n % 10;
            value3=value2*(pow(2,i));
            value4=value3+value4;
            n=n/10;
        }
            value1=n/10;
    }
    
        
        printf("%d", value4);
    
    return 0;
}
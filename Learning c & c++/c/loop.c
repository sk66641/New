#include <stdio.h>
int main(){
    int a,i=0;
    printf("Enter a number\n");
    scanf("%d" , &a);
        printf("Here we go,\n");
    do
    {
        printf("%d\n" , i+a);
        i=i+a;
    } while (i<=a*2);
    return 0;
    
}
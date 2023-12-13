#include <stdio.h>
int main(){
    int n,row=1,col=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    while (row<=n)
    {
        printf("*");
        row++;
    }
    return 0;
}
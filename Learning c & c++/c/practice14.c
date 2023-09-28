#include <stdio.h>
int main(){
    int a,b;
    char operators;
    printf("enter two numbers and an operator here\n");
    scanf("%d %d %c"  , &a,&b,&operators);
    switch (operators)
    {
    case '+':
        printf("addition: %d" , a+b);
        break;
    case '-':
        printf("subtraction: %d" , a-b);
        break;
    case '/':
        printf("division: %d" , a/b);
        break;
    case '*':
        printf("multiplication: %d" , a*b);
        break;
    case '%':
        printf("modulus: %d" , a%b);
        break;
    
    default:
    printf("no operations");
        break;
    }
    return 0;
}
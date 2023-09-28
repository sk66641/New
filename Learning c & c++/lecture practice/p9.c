#include <stdio.h>
int foo()
{
    printf("foo called \n");
    return 5;
}
int bar()
{
    printf("bar called \n");
    return 10;
}
int main()
{
    int result = foo() + bar() * 2;
    printf("result is %d \n", result);
    return 0;
}
#include <stdio.h>
int fun(int i)
{
    return i++;
}
int main()
{
    int i = 2;
    // printf("%d\n", fun(i++));
    printf("%d\n",fun(i++)+i+(++i));
    return 0;
}
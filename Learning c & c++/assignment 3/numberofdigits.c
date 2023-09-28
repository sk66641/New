// method 1
#include <stdio.h>

int main()
{
    long long num;
    int count = 0;
    printf("Enter num\n");
    scanf("%lld", &num);
    while (num != 0)
    {

        num = num / 10;

        ++count;
    }
    printf("number of digits: %d", count);
    return 0;
}

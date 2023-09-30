#include <stdio.h>
int main()
{
    char str1[] = {'h', 'e', 'y', ' ', 'w', 'h', 'a', 't', '\0'};
    printf("%s\n", str1);
    char str2[] = "hey what";
    printf("%s", str2);
    return 0;
}
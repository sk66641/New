#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    printf("%c\n", ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("character is a digit");
    }
    else
    {
        printf("character is not a digit");
    }
    return 0;
}
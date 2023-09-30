#include <stdio.h>
int main()
{
    void print(char str[])
    {
        int i = 0;
        while (str[i] != '\0')
        {
            printf("%c", str[i]);
            i++;
        }
    }
    char str[100];
    printf("Enter here\n");
    gets(str);
    printf("Using puts\n");
    puts(str);
    printf("Using custom function 'print'\n");
    print(str);
    print("\n");
    printf("Using printf\n");
    printf("%s", str);
    return 0;
}
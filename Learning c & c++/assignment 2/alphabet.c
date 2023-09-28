#include <stdio.h>
int main()
{

    char alphabet;
    printf("enter an alphabet here\n");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }

    return 0;
}
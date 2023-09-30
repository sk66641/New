#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "sanu kumar", s2[] = " i am from Nalanda";
    printf("the strcmp for s1 and s2 returned %d\n", strcmp(s1, s2));
    // the strcmp will return either positive value , negative value or zero after comparing the strings
    printf("the length of the string s1 is %d\n", strlen(s1));
    printf("the length of the string s2 is %d\n", strlen(s2));
    printf("the reverse of the string s1 is %s\n", strrev(s1));
    printf("the reverse of the string s2 is %s\n", strrev(s2));
    return 0;
}

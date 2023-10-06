#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50], s3[] = " is a friend of ";
    printf("Enter two names\n");
    gets(s1);
    gets(s2);
    strcat(s1, s3);
    // printf("%s", strcat(s1,s2));
    puts((strcat(s1 , s2)));
    return 0;
}
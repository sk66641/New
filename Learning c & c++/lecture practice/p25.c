// method2 to add s1 to s2...
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "sanu kumar", s2[] = " i am from Nalanda", s3[50];

    strcpy(s3, strcat(s1, s2));
    printf("%s\n", s3);

    return 0;
}

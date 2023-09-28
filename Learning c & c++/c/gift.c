#include <stdio.h>
int main()
{
    float maths, science;
    printf("What is your percentage of marks in Maths?\n");
    scanf("%f", &maths);
    printf("You have got %f percent marks in Maths.\n", maths);
    if (maths >= 30)
    {
        printf("Status:Passed\n");
    }
    else
    {
        printf("Status:Failed\n");
    }

    printf("What is your percentage of marks in Science?\n");
    scanf("%f", &science);
    printf("You have got %f percent marks in Science.\n", science);
    if (science >= 30)
    {
        printf("Status:Passed\n");
    }
    else
    {
        printf("Status:Failed\n");
    }
    if (maths >= 30 & science >= 30)
    {
        printf("Congratulations! You have won a prize of $45.\n");
    }
    if (maths >= 30 & science < 30)
    {
        printf("Congratulations! You have won a prize of $15.\n");
    }
    if (maths < 30 & science >= 30)
    {
        printf("Congratulations! You have won a prize of $15.\n");
    }
    if (maths < 30 & science < 30)
    {
        printf("bhai kya kr rha hai tu.\n");
    }
    return 0;
}
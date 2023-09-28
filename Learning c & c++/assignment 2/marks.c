#include <stdio.h>
int main()
{
    int physics, chemistry, maths, biology, computer;
    printf("enter your marks in physics\n");
    scanf("%d", &physics);
    printf("enter your marks in chemistry\n");
    scanf("%d", &chemistry);
    printf("enter your marks in maths\n");
    scanf("%d", &maths);
    printf("enter your marks in biology\n");
    scanf("%d", &biology);
    printf("enter your marks in computer\n");
    scanf("%d", &computer);
    int sum = physics + chemistry + maths + biology + computer;
    printf("your total marks: %d\n", sum);
    float percentage = sum * 0.002 * 100;
    printf("your percentage is: %f\n", percentage);
    if (percentage >= 90)
    {
        printf("you have got A grade");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("you have got B grade");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("you have got C grade");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("you have got D grade");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("you have got E grade");
    }
    else
    {
        printf("you have got Z grade");
    }
    return 0;
}

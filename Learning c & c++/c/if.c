#include <stdio.h>
int main()
{
   int age;
   printf("Enter your age\n");
   scanf("%d", &age);
   printf("your age is %d\n", age);
   if (age >= 18)
   {
      printf("you can vote");
   }
   else if (age == 13)
   {
      printf("you can vote after 5 years\n");
   }
   else if (age == 14)
   {
      printf("you can vote after 4 year\n");
   }
   else if (age == 15)
   {
      printf("you can vote after 3 year\n");
   }
   else if (age == 16)
   {
      printf("you can vote after 2 year\n");
   }
   else if (age == 17)
   {
      printf("you can vote after 1 year\n");
   }

   else
   {
      printf("you cannot vote\n");
   }
   return 0;
}

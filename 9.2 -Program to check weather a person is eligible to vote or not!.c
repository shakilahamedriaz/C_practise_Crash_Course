#include<stdio.h>
int main()
{
    // >  program to check weather a person
   // -eligible vote or not

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    //if-else statement

    if (age>=18)
    {
         printf("You are eligible for vote in Bangladesh");
    }
        else
            {
            printf("Sorry you are not eligible for vote in Bagladesh");
           }
   return 0;

}

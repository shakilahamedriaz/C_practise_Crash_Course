
#include<stdio.h>
int main()
{

    // Program to calculate the grade of the student according to the specefic marks
    int marks=0;
    printf("Inter Your marks: ");
    scanf("%d",&marks);


    //switch case statement
    //syntax
       switch(marks/10)

       {
           case 10:
           case 9:
            /*marks between 90-100*/
             printf("\n Your Grade is : A");
             break;

           case 8:
               /*marks between 80-89*/
              printf("\n \n \n Your Grade is :B");   // ("\n" use for space in output)
              break;

           case 7:
            /*marks between 70-79*/
            printf("\n Your Grade is :C");
            break;

           case 6:
            /* marks between 60-69*/
            printf("\n Your Grade is :D ");
            break;

           case 5:
            /* marks between 50-59*/
            printf("\n Your Grade is :E");
            break;

           case 4:
            /*marks between 40-49*/
            printf("\n Your Grade is : E--");
            break;

           default :
            /* marks less than 40*/
            printf("\n Your Grade is: F or Fail\n");

       }

return 0;

}

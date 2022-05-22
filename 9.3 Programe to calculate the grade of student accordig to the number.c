#include<stdio.h>

int main()

{
     //Program to calculate the grade of the students according to the specified marks
     //if-else


    int marks;

    printf("Enter Your marks: ");
    scanf("%d",&marks);



    if(marks>85 &&  marks<=100)
    {
        printf("Your grade is A");
    }

    else if(marks>60 && marks<=85)
    {
        printf("Your grade is B+");
    }

    else if(marks>40 && marks<=60)
    {
        printf("Your grade is B");
    }

    else if(marks>30 && marks<=40)
    {
        printf("Your grade is C");
    }

    else
    {
      printf("Sorry You are failed please visit principal room with your parents");
    }



    return 0;

}

// Online C compiler to run C program online
#include <stdio.h>

struct student_data
{
    int Id;
    int Marks;
    char fav_char;
 };
int main()

{
    //program to store students data
    struct student_data Rohit,Ravi,Suresh,Virat;
    //store first student information
    Rohit.fav_char='a';
    Rohit.Id=1;
    Rohit.Marks=85;

    //store last student information
    Virat.fav_char='b';
    Virat.Id=3;
    Virat.Marks=88;

    //print the first student information
    printf("First student id : %d\n",Rohit.Id);
    printf("First student marks : %d\n",Rohit.Marks);
    printf("First student fav.character : %c\n",Rohit.fav_char -32);


    //print last student information
    printf("second student id : %d\n",Virat.Id);
    printf("second student marks: %d\n",Virat.Marks);
    printf("Second student fav_character: %d\n",Virat.fav_char);


      return 0;
}

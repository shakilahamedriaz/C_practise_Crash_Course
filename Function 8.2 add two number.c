#include<stdio.h>

int main()
{                    // add two number using function...

                              //calling a function

    int result = get_sum(60,20);
    printf("My sum is: %d",result);    //-() er vitore 2 ta pera miter{value store korar jonne}
    return 0;
}
                           //function definition

    int get_sum (int x, int y) {
        int sum =x*y;

        return sum;


}

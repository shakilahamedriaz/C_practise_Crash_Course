//2D Array in c

#include<stdio.h>
int main()
{
    /*  --2 dimensional array can be defined as array an array of arrays.
     --syntax given below
    --syntax
    data_type array_name[rows][colums];

    */


        int array[4][3] =
  {
        {1,2,3},   //0          // 1st row e define
        {2,3,4},   //1           //korbe koita array newa
        {3,4,5},   //2          //jabe.eg-ekhne 4 ta newa hoyeche
        {4,5,6},   //3          //& 2nd columb define korbe
//indx- 0 ,1,2                   //array er bhitor koita input/data nibe

 };

        //print last array & last value
        printf("The last array & last value : %d",array[3][2]);
                                  //ekhon indexig korte hobe
                                 //-jeno last array ta print hoy
                                 //indaxing for last arry


        return 0;

}



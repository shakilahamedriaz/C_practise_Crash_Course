#include <stdio.h>

int main()
{


//pointer in c prgramming

/*

*pointer in c language is variable which store the address of another variable.
--------syntax-------
poinrer in c language can be declared using *(asterisk symbol).

*/
     int myVar = 50;
     //pointer
     int *p;
     p = &myVar;

    printf("The address of myVar is %x\n",myVar);
    printf("The address of P is %x\n",p);
    printf("The value of P is %d\n",*p);

     return 0;
}

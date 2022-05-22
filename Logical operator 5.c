#include<stdio.h>

int main()
{
  //logical operator(no

  /*logical and operator-&&
  T.T=T
  T.F=F
  F.T=F
  F.F=F
  logical or operator-||

  T+F=T
  F+T=T
  F+F=F
  T+T=T

  logical not operator-!

  True= False
  False=True

  */


  //logical and
  int a=10;
  int b=4;

  int result=a>b && b<a;
  //T && T=T (that means ans true-1)
  printf("result: %d\n",result);

  //logical OR
  int c=10;
  int d=4;

  int result1=c>d || d>c;
  //T || F=T (that means ans true 1)
  printf("result2 :%d\n",result1);

  //logical Not
  int x= 100;
  int y= 205;

  int result3=!a;
  printf("result3:%d\n",result3);



  return 0;

}

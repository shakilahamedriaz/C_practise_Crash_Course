#include  <stdio.h>
int main()

{
    //calculator app in c
    int num1,num2;
    float result=0;
    char ch; //to store operator

    //take user input
    printf("Enter the first number: \n");
    scanf("%d",&num1);
    printf("Enter the Second number: \n");
    scanf("%d",&num2);


    printf("Choose operation to perform (+,-,*,/,%)");
    scanf(" %c",&ch);

    Swith()

    {

        case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1-num2;
        break;
        case '*':
        result = num1*num2;
        break;
        case '/':
        result = (float)num1/(float)num2;
        break;
        case '%':
        result = num1%num2;
        break;
        default:
            printf("Syntax error. \n");


    }
      //To show the actual restlt
      Printf("The Answer is: %d %c %d %f=%f \n",num1,num2,result);



    return 0;
}

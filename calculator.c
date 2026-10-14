#include<stdio.h>
int main(){
  char operator;
float num1,num2;
printf("enter the operator(+,-,*,/):");
scanf("%c",&operator);
printf("enter the numbers:");
scanf("%f %f",&num1,&num2);
switch(operator){
case '+':
            printf("%f + %f = %f\n", num1, num2, num1 + num2);
            break;
  case '-':
            printf("%f - %f = %f\n", num1, num2, num1 - num2);
            break;
  case '*':
            printf("%f * %f = %f\n", num1, num2, num1 * num2);
            break;
 case '/':
            if(num2 != 0)
                printf("%f / %f = %f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Error! Operator is not correct\n");
    }

    return 0;
}

//WRITTEN BY IRETE VINCEnT//
//THIS IS A SIMPLE CALCULATOR PROGRAM USING SWITCH IN C LANGUAGE//
//THIS CALCULATOR DOES THESE OPERATIONS//
//1:ADDITION OF TWO NUMBERS 2:SUBTRACTION OF TWO NUMBERS//
//3:DIVISION OF TWO NUMBERS 4:MULTIPLICATION OF TWO NUMBERS//
#include<stdio.h>
int main(){
float num1,num2,result;        
char operator;('+','-','*','%');
printf("Please enter an operator:");
scanf("%c",& operator);
printf("Please enter two operands:\n");
scanf("%f%f",&num1,&num2);

switch (operator)    
{
case '+':
result=num1+num2;
printf("sum=%f\n,",result);
break;

case '-':
result=num1-num2;
printf("subtraction=%f\n",result);
break;

case '%':
result=num1/num2;
printf("division=%f\n",result);
break;

case'*':
result=num1*num2;
printf("multiplication=%f\n",result);
break;

default:
printf("you have not selected the right operator");
break;
}

   
    return 0;
}        
          
    
    
    
    





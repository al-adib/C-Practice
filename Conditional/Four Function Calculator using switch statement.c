/*
Write a C program to work as
4 function calculator +, _, *, /
Sample input string may be
20+30[Press Enter]
The c program will show answer 50
use switch statement
*/
#include<stdio.h>  
int main()   
{   
    char operator;
    float num1, num2, result;
    /* Input a number operator and second number from user */
    printf("Enter firrst number operaor second number[ENTER]:");
    printf("\nExample:  10+20[Enter]: ");
     scanf("%f%c%f", &num1,&operator,&num2);

    /* check the operator and perform operation
	accordingly */
	switch(operator)
	{
	
	case '+':
	  {
	   result= num1+num2;
	   printf("Addition=%.2f",result);
       break;
       }
	case '-': 
	   {
	   result = num1- num2;
	   printf("Subtraction=%.2f",result);
       break;
	   }
	case '*': 
	   {
	   result = num1 * num2;
	   printf("Multiplication=%.2f",result);
       break;
	   }
	case '/': 
	   {
	   result = num1 / num2;
	   printf("Division=%.2f",result);
       break;
	   }
    default:
	   printf("Invalid operator please input +, -, *, / ") ;
	 return 0;
   }  
}
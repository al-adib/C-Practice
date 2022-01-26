/***************************************************
 * C Program to Find N Power P using recursion 
 * Sample Run of Recursive power function 
 * Enter base: 2
 * Enter exponent: 3
 * 2^3 = 8
 ***************************************************/
 
#include<stdio.h>

/* prototype for user defined power() funtion*/
int power(int, int);
 
/* main function */
int main(void)
{    
    int base, exponent;
    
    printf("Please Enter base: ");
    scanf("%d", &base);
    
    printf("Please Enter exponent: ");
    scanf("%d", &exponent);
    
    printf("%d^%d = %d", base, exponent, power(base, exponent));
    
    return 0; 
}
 
 /* Function definition for recursive power() function*/
int power(int base, int exponent)
{    
    
    /*Base condition, Base case
     if power/exponent of any number is zero then result is 1*/
    if(exponent == 0)
    {
        return 1;
    }
    
    else
    {
        /* recursive call*/
        return base * power(base, exponent - 1);
    }
    
}
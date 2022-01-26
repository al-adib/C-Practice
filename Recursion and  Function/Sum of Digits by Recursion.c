/**
 ** C program to find sum of digits using recursive function
 */
 
#include <stdio.h>

/* Function prototype / declaration */
int sumDigits(int num);


/* main function*/
int main()
{
    int num, sum;
    
    printf("Please, Enter a number to calculate sum of digits by Recursion: ");
    scanf("%d", &num);
    
    sum = sumDigits(num);
    
    printf("Using Recursion, Sum of digits of %d = %d", num, sum);
    
    return 0;
}


/**


 ** Recursive function to find sum of digits of a number
 **/
int sumDigits(int n)
{
    /* Base condition / termination condition*/
    if(n == 0)
        return 0;
        
    return ((n % 10) + sumDigits(n / 10));
}
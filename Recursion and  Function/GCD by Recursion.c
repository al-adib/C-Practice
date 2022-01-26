/**
 * C program to find GCD that is HCF
 * of two numbers using recursion
 */
 
#include <stdio.h>

/* Function declaration */

int gcd(int a, int b);


int main()
{
    int n1, n2, result;
    
    /* Show message to enter two numbers
	and get input of two numbers from user
	*/
    
	printf("Enter two numbers to find GCD:\n");
    scanf("%d%d", &n1, &n2);
    
   	   
	result = gcd(n1, n2);
    
    printf("GCD of %d and %d = %d", n1, n2, result);
    
    return 0;
}


/**
 * Recursive function to find GCD of two numbers
 */
int gcd(int a, int b)
{
    
	if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}
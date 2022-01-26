#include<stdio.h>
 
// prototype for user defined recursive function
long factorial(int);

// main function
 
int main()
{
  int n;
  long fact;
 
  printf("Enter a number to find its factorial using Recursion=");
  scanf("%d", &n);
 
  if (n < 0)
    printf("Factorial of negative integers isn't defined.\n");
  else
  {
    fact = factorial(n);
    printf("%d! = %ld", n, fact);
  }
 
  return 0;
}

// Function definition for recursive factorial function

long factorial(int n)
{
  if (n == 0) // Base case because factorial of 0 is 1
    return 1;
  else
    return (n*factorial(n-1)); //Recursive, call to itself
}
#include<stdio.h>

/* function prototype*/
int fibo(int);

int main()
{
  int n, i = 0, k;

  printf("How many terms of Fibonacci series are required? ");
  scanf("%d", &n);

  printf("Using Recursion, the Fibonacci series terms are:\n");

  for (k = 1; k <= n; k++)
  {
    printf("%d, ", fibo(i));
    i++;
  }

  return 0;
}

/* recursive function to find nth fib term */
int fibo(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibo(n-1) + fibo(n-2));
}
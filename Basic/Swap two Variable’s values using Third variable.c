#include <stdio.h>
int main()
{
  
  int n1,n2,temp;

  printf("Enter two numbers to swap values\n");
  scanf("%d%d", &n1, &n2);

  printf("Before swapping: n1=%d and n2=%d", n1,n2);
  
  temp = n1;
  n1 = n2;
  n2 = temp;
  
  
  printf("\nAfter  swapping: n1=%d and n2=%d", n1,n2);
  

  return 0;
}
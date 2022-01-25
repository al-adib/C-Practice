#include <stdio.h>
int main()
{
  int addition, num1, num2;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &num1, &num2);

  addition = num1 + num2;

  printf("Sum of the numbers = %d\n", addition);

  return 0;
}
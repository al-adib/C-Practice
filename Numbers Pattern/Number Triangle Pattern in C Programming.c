/*
Write a program to print number pattern
left triangle downward in c programming 
language as shown below

54321
5432
543
54
5
*/

#include<stdio.h>  
int main()   
{   
  int row, col;  
  for( row = 1; row <= 5;row++)
  {
  	for(col=5; col>=row; col--)
	   printf("%d",col);   
  	printf("\n");
  }
  return 0;
}
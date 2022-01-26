/*
Write a C program to print alphabet pattern
triangle as shown below
ABCDE
ABCD
ABC
AB
A
*/
#include<stdio.h>  
int main()   
{   
  int row, col;  
  for( row = 69; row >=65;row--)
  {
  	for(col=65 ; col<=row; col++)
	   printf("%c",col);   
  	printf("\n");
  }
  return 0;
}  

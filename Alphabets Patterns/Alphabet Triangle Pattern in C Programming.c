/*
Write a C program to print alphabet pattern
triangle as shown below
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>  
int main()   
{   
  int row, col;  
  for( row = 65; row <=69;row++)
  {
  	for(col=65 ; col<=row; col++)
	   printf("%c",col);   
  	printf("\n");
  }
  return 0;
}  
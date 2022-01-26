/*
Write a C program to print star pattern
triangle as shown below. 


*****
 **** 
  *** 
   ** 
    *

*/
#include<stdio.h>  
int main()   
{   
  int row, col, space=0, s;  
  for( row = 5; row >= 1;row--)
  {
  	for(s=1; s<=space;s++)
  	   printf(" ");
  	for(col=1; col<=row; col++)
	   printf("*");   
  	printf("\n");
  	space++;
  }
  return 0;
}

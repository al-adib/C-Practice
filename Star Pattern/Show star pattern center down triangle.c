/*
Write a C program to print star pattern
triangle as shown below
   *********
    *******
     *****
      ***   
       *


*/
#include<stdio.h>  
int main()   
{   
  int row, col, space=5, s;  
  for( row = 9; row >= 1;row-=2 ) 
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

  
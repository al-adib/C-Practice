/* C Program to print Floyd's Triangle
 if number of rows is 4 then the 
 output is as follows

1
2 3
4 5 6
7 8 9 10

*/
#include<stdio.h>

int main() {
    int nrows, i, j, number= 1;
    printf("Enter number of rows for printing Floyd's Triangle: ");
    scanf("%d", &nrows);
    
	for (i=1; i<=nrows; i++) 
	    {
          for (j=1; j<=i; ++j)
            { printf("%d ", number);
              number++;
            }
          printf("\n");
        }
    return 0;
}

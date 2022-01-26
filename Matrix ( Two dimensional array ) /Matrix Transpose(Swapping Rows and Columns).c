/* C program to find Transpose of a Matrix

www.easycodebook.com
*/


#include <stdio.h>
 
int main()
{
   int m, n, i, j, matrix1[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of the matrix[Maximum 10]:\n");
   scanf("%d%d", &m, &n);
   printf("Please Enter %d elements Row wise in (%d rows x %d columns) matrix\n",m*n,m,n);
   printf("Please Remember, Each group of %d numbers will form a row of matrix\n",n);
 
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix1[i][j]);
 
   printf("The origional Matrix is:\n");
 
   for (i = 0; i < m; i++)
   {
      for (j = 0 ; j < n; j++)
         printf("%d\t",matrix1[i][j]);
      printf("\n");
	}    
   
   
   /* producing Transpose matrix */
   
   for (i = 0; i < m; i++) 
      for (j = 0 ; j < n; j++) 
         transpose[j][i] = matrix1[i][j];
        
   
   printf("Transpose of the given Matrix is by swapping rows and columns:\n");
   
   for (i = 0; i < n; i++) {
      for (j = 0 ; j < m; j++) 
        printf("%d\t", transpose[i][j]);
      
      printf("\n");
   }
   return 0;
}
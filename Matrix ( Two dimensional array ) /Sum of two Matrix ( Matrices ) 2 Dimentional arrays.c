/* C program to add two matrices 

www.easycodebook.com
*/
#include <stdio.h>
 
int main()
{
   int m, n, i, j, matrix1[10][10], matrix2[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Please Enter %d elements of first matrix\n",m*n);
 
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix1[i][j]);
 
   printf("Please Enter the %d elements of second matrix\n",m*n);
 
   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &matrix2[i][j]);
   
   printf("Sum of the two matrices is as follows:\n");
   
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         sum[i][j] = matrix1[i][j] + matrix2[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}
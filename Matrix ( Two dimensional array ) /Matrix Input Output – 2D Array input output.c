/* Write a C program to input a m x n matrix
   and displaying in matrix format 
     www.easycodebook.com
*/ 
#include <stdio.h>
 
 
int main()
{
    int matrix[10][10];
    int i,j,m,n;
     
    printf("Enter number of Rows [10 Maximum]:");
    scanf("%d",&m);
    printf("Enter number of Columns [10 Maximum:]:");
    scanf("%d",&n);
 
    printf("\nEnter %d matrix elements in %d x %d Matrix:\n",m*n,m,n);
    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("Enter element in Matrix[%d,%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    printf("\nYou have entered the Matrix  :\n");
    for(i=0;i< m;i++)
    {
        for(j=0;j< n;j++)
        {
            printf("%d\t",matrix[i][j]);/*print an element and a tab space*/
        }
        printf("\n");   /*for new line after completion of one row*/
    }
    return 0;   
}
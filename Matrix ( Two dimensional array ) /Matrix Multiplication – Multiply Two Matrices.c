/* Matrix multiplication */

#include<stdio.h>

int main()
{
 int arr1[3][3],arr2[3][3],arr3[3][3]={0},i,j,k;

 printf("Type a matrix of 3 rows & 3 colomns :\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&arr1[i][j]);
 
 printf("Type another matrix of 3 rows & 3 colomns :\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&arr2[i][j]);
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   for(k=0;k<3;k++)
    arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
  }

 }
 
 printf("\n\nOutput:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   printf("%5d",arr3[i][j]);
  printf("\n\n");
 }

 return 0;
}


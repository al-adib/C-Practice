/*
Write a C Program 
to input 5 numbers in array
of five integers. Find and Display minimum
or smallest number in array
*/
#include<stdio.h>

int main()
{
   int numArray[5], i, min;
   /*input in array using for loop*/
   for(i=0; i<5; i++)
      {
	   printf("Enter Element No:%d=",i+1);
       scanf("%d", &numArray[i]);
      }
      /* suppose first number in array is minimum */
    min = numArray[0]; 
    for(i=1;i<5;i++)
      if(numArray[i] < min)
        min = numArray[i];
    printf("Minimum or Smallest Number in Array is %d\n", min);
   
   return 0;
}

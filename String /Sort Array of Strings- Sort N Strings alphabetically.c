/*
C program to input n strings and sort them
in ascending order alphabetically
*/

#include <stdio.h>
#include <string.h>
int main()
{
  char str[30][40],temp[30];
  int n,i,j;
  
       printf("\nString Sorting: Sorts N strings:\n");
       printf("************************************\n");  
  
  printf("Input number of strings :");
  scanf("%d",&n);
  getchar(); 
  printf("Input string %d :\n",n);
  for(i=0;i<n;i++)
   gets(str[i]);
  
       /*Logic for sorting array of strings*/

     for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
	 
   /* print the sorted array of strings */	   
   printf("The strings in ascending order after sorting :\n");
	      for(i=0;i<n;i++)
		 printf("%s\n",str[i]);
		 return 0;
 
} 
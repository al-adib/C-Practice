/* C Program Insertion Sort */

 
#include <stdio.h> 
  


int main() 
{ 
    int array[100], i, key, j, n;  
     
  
    printf("Enter number of elements [Maximum 100]= ");
    scanf("%d", &n);

    printf("Enter %d numbers in this array\n", n);

    for (i = 0; i < n; i++)
       scanf("%d", &array[i]);
    
     for (i = 1; i < n; i++) 
      { 
        key = array[i]; 
        j = i - 1; 
  
        		  
        while (j >= 0 && array[j] > key)
	 { 
            array[j + 1] = array[j]; 
            j = j - 1; 
         } 
        
		array[j + 1] = key; 
        } 
	
	printf("Sorted array in ascending order is as follows:\n");
	for (i = 0; i < n; i++) 
        printf("%d ,  ", array[i]); 
    
  
    return 0; 
} 
 /* C Program to Count frequencies
of each element of an array of numbers
       www.EasyCodeBook.com
 */
#include <stdio.h>

int main()
{
  int array[100], array2[100], n, i, j, element, count;;

  printf("Enter number of elements in array = ");
  scanf("%d", &n);

  printf("Enter %d numbers in array\n", n);

  for (i = 0; i < n; i++)
      {
	    scanf("%d", &array[i]);
	    array2[i]=array[i]; /*copy, save origional array*/
       }
   
  for (i = 0 ; i < n ; i++)
  {
    
	if (array2[i]==-999) /*if element already processed, simply ignore*/
	   continue;    
	
	element = array2[i];
	count=1;
	for (j = i+1 ; j < n; j++)
    {
      if (array2[j] == element) /* if element found < */
      {
        count++; /* count it*/
		array2[j]=-999; /*make sure not to repeat same element counting*/
		
	  }	   
        
	 }	 
	 
	  printf("The frequency of %d in array is %d\n",element,count);  
	  
      
   }
 
    
  return 0;
}
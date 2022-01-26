#include <stdio.h>
int main()
{
  int array[100], n, i, j, minindex, temp;

  printf("Enter number of elements [Maximum 100]= ");
  scanf("%d", &n);

  printf("Enter %d numbers in this array\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  /* finding minimum element from first to last element in whole array */
  for (i = 0; i < n - 1; i++)
  {
    minindex = i;

    for (j = i + 1; j < n; j++)
    {
      if (array[minindex] > array[j])
        minindex = j;
    }
   
     /* swapping minimum element with first element
	    in first pass (step)
		swap second element with min element from 2 to last number
		in second pass and so on.
	*/	  
    if (minindex != i)
    {
      temp = array[i];
      array[i] = array[minindex];
      array[minindex] = temp;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
    printf("%d , ", array[i]);

  return 0;
}
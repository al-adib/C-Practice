#include <stdio.h>
int main()
{
  int a[100], item, i, n;

  printf("Enter number of elements in array[Maximum 100]=");
  scanf("%d", &n);

  
  for (i = 0; i < n; i++)
    {
    printf("Enter Element Number %d in Array=", i+1);
	scanf("%d", &a[i]);
	}

  printf("Enter a number to search in array=");
  scanf("%d", &item);

  for (i = 0; i < n; i++)
  {
    if (a[i] == item)    /* If required element is found */
    {
      printf("%d is present at location %d in the given array", item, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the given array.\n", item);

  return 0;
}
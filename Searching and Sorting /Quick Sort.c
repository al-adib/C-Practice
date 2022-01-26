/* C Program QuickSort */
#include<stdio.h> 
  

void quickSort(int arr[], int low, int high);

int partition (int arr[], int low, int high) ;

void swap(int* x, int* y) ;

void printArray(int arr[], int size);

 
int main() 
{ 
    int arr[100] , n, i;
	
	/* Input size of array*/
	
	printf("Enter no of elements in the Array [Maximum 100]: ");
	scanf("%d",&n);
	
	/* Input array elements (numbers to be sorted)*/
	printf("Enter %d array elements: \n",n);
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]); 
    
    
    quickSort(arr, 0, n-1); 
    
	printf("\nSorted array in ascending order using Merge Sort Algoithm is as follows:\n");
	/* call printArray() function to show the sorted array*/
	 
    printArray(arr, n); 
    return 0; 
} 


/* user defined function swap 
for exchanging values
*/
void swap(int* x, int* y) 
{ 
    int t = *x; 
    *x = *y; 
    *y = t; 
} 
  
/* This is a partition function. It will take last element as pivot,
   places the pivot element at its correct position in sorted 
    array, and places all smaller elements than pivot  
   to left of pivot element and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high], i, j;     
    i = (low - 1);  /* Index of smaller element */
  
    for (j = low; j <= high- 1; j++) 
    { 
        /* If current element is smaller than the pivot*/
        if (arr[j] < pivot) 
        { 
            i++;    /* increment index of smaller element */
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* This is the main function that implements QuickSort 
 arr[] is the Array to be sorted, 
  low  is the Starting index of arrray, 
  high  is the Ending index of the array
  */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[pi] is now 
           at right place
		    */
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); /*quicksort left sub array*/
        quickSort(arr, pi + 1, high); /*quick sort right sub array*/
    } 
} 
  
/* user defined function to print the given array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d, ", arr[i]); 
    
} 
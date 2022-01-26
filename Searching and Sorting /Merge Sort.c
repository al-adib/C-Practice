/*
C Program Merge Sort uses
merge sort method to sort 
N element array in ascending order
*/

#include<stdio.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
	int a[100],n,i;
	printf("Enter no of elements in the Array [Maximum 100]: ");
	scanf("%d",&n);
	
	/*Input array elements (numbers to be sorted)*/
	printf("Enter %d array elements: \n",n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,n-1); /*call mergesort() for sorting the list*/
	
	printf("\nSorted array in ascending order using Merge Sort Algoithm is as follows:\n");
	/*output the sorted array*/
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
		
	return 0; 
}
 

void mergesort(int a[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		/*call Merge sort for left sub list*/
		mergesort(a,mid+1,j);	/*call merge sort for right sub list*/
		merge(a,i,mid,mid+1,j);	/*call merge for merging of two sorted sub-arrays*/
	}
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[100];	/*temporary array used for merging*/
	int i,j,k;
	i=i1;	/*start of the first list*/
	j=i2;	/*start of the second list*/
	k=0;
	
	while(i<=j1 && j<=j2)	/*while elements in both lists*/
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=j1)	/*copying remaining elements of the first list*/
		temp[k++]=a[i++];
		
	while(j<=j2)	/*copying remaining elements of the second list*/
		temp[k++]=a[j++];
		
	/*Transfer elements from temporary array temp[] back to original array a[]*/
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
/*
  C program to calculate and print 
  length of given string without 
  using built-in function.
  */
 
#include<stdio.h>
#include<string.h>     
int main()
{
    int i,length;
	char str[100];
		
    printf("Enter a String to find its length:");
    gets(str);
     
    i=0;
	
	while(str[i]!='\0')
	    i++;
		
    printf("Using own code, The length of string '%s' is = %d",str,i); 
	printf("\nUsing Predefined Function strlen() The length is = %d",strlen(str)); 
    return 0;
}
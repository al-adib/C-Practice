/*
C program to input Source string
and a search substring to be searched
in first string. And displaying found or
not, using string function strstr().
*/

#include <stdio.h>
#include <string.h>



int main()
  {

	char str[100];
	char search[50];
	
	char *ptr;
	 
	printf("Enter a string:\n");
	gets(str);
	
	printf("Enter search substring:\n");
	gets(search);
	
	ptr = strstr(str, search);



	if (ptr != NULL) /* Substring found */
	
		printf("'%s' contains '%s' on index %d\n", str, search, ptr-str);
	
	else /* Substring not found */
	
		printf("'%s' doesn't contain '%s'\n", str, search);
	



	return 0;
}
/*C program to convert given string
into tOOGLE cASE.*/
#include <stdio.h>

int main()
{
	char	str[100];
	int		i;

	printf("Enter a string to change into tOGGLE cASE : ");
	gets(str);

	/* toggle each string character
	   if it is upper case, change to lower case
	   if it is lower case, change into upper case*/
	
	for(i=0;str[i]!='\0';i++)
    {
		if(str[i]>='A' && str[i]<='Z') /*if upper case character*/
			str[i]=str[i]+32;	/*convert into lower case*/
		else if(str[i]>='a' && str[i]<='z') /*if lower case character*/
			str[i]=str[i]-32;	/*convert into upper case*/
	}

	printf("The given String in tOGGLE cASE is: %s",str);
	return 0;
}


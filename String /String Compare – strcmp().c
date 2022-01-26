/* C program to input two strings
 and check whether both strings are
 the same (equal) or not using strcmp()
 predefined function. strcmp() 
 gives a case sensitive comparison.
 
 www.easycodebook.com
 */

#include <stdio.h>
#include <string.h>
int main()
{
   char str1[100], str2[100];

   printf("Enter first string\n");
   gets(str1);

   printf("Enter second string\n");
   gets(str2);

   if (strcmp(str1,str2) == 0)
      printf("The strings are equal.\n");
   else
      printf("The strings are not equal.\n");

   return 0;
}
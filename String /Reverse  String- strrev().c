/* C Program Reverse a string
  using strrev() predefined function
  
  www.easycodebook.com
  */
#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];

   printf("Please, Enter a string to reverse\n");
   gets(str);

   strrev(str);

   printf("The Reverse string is : %s\n", str);

   return 0;
}

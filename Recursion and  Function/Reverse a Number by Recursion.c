

/* C Program Reverse Number By Recursion*/
#include <stdio.h>

/* function prototype */
long reverse(long);
 
/* main function  */
int main()
{
   long num, rev;
   
   printf("Enter a number to be reversed by Recursion: ");
   scanf("%ld", &num);
 
   rev = reverse(num);
 
   printf("Reverse Number = %ld\n", rev);
 
   return 0;
}

long reverse(long n) {

  
/* To preserve value of r variable 
during recursive calls, declare it static*/

   static long r = 0; 
   
   if (n == 0)
      return 0;
   
   r = r * 10;
   r = r + n % 10;
   reverse(n/10);
   return r;
}
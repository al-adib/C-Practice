/* Reverse a Number using while loop */
#include <stdio.h>
int main()
{
 int n, r = 0;
 
 printf("Please enter a number: ");
 scanf("%d",&n);
 
 while (n > 0)
 {
  r = r * 10;
  r = r + n%10;
  n = n/10;
 }
 
 printf("Reversed number is = %d: ", r);
 return 0;
}


--------------------------------------------------------------


/* Reverse a Number using for loop */
#include <stdio.h>
int main()
{
 int n, r;
 
 printf("Please enter a number: ");
 scanf("%d",&n);
 
 
 for(r=0;n>0;n=n/10)
 {
  r = r * 10;
  r = r + n%10;
 }
 
 printf("Reversed number is = %d: ", r);
 return 0;
}

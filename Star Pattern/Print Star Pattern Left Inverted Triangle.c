/*Write a C Program to print 
the following Star Pattern
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int row, col;
    for(row=5;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
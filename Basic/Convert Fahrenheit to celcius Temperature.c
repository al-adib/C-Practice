/*
Write a C program to Convert Fahrenheit into 
Celsius
*/

#include <stdio.h>
int main()
{
    float fahren, celsius;
    printf("Enter temperature in Fahrenheit=");
    scanf("%f", &fahren);
    celsius = (fahren-32)*5.0 / 9.0;
    printf("%.2f Fahrenheit is equal %.2f in       Celsius",fahren,celsius);
    return 0;
}
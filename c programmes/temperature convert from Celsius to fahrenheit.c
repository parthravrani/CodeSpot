#include<stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    printf("\nEnter temp in Celsius : ");
    scanf("%f", &celsius);
 
    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit : %f ", fahrenheit);
 
    return (0);
}

========
 OUTPUT
========

Enter temp in Celsius : 32

Temperature in Fahrenheit : 89.599998

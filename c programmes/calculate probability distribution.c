#include <stdio.h>
#include <math.h>
#define MAXSIZE 100
 
void main()
{
    float nuArr[MAXSIZE];
    int  i, size;
    float mean, variance, standardDeviation, sum = 0, sum1 = 0;
 
    printf("Enter numbers you want to calculate : ");
    scanf("%d", &size);
 
    printf("Enter %d numbers \n", size);
 
 
    for (i = 0; i < size; i++)
    {
        scanf("%f", &nuArr[i]);
    }
 
    for (i = 0; i < size; i++)
    {
        sum = sum + nuArr[i];
    }
 
    mean = sum / (float)size;
 
    for (i = 0; i < size; i++)
    {
        sum1 = sum1 + pow((nuArr[i] - mean), 2);
    }
 
    variance = sum1 / (float)size;
 
 
    standardDeviation = sqrt(variance);
 
    printf("Mean of all elements :  %.2f\n", mean);
    printf("Variance of all elements  : %.2f\n", variance);
    printf("Standard deviation : %.2f\n", standardDeviation);
 
}

========
 OUTPUT
========

Enter numbers you want to calculate : 5                                                                                     
Enter 5 numbers                                                                                                             
6                                                                                                                           
8                                                                                                                           
58                                                                                                                          
9                                                                                                                           
2                                                                                                                           
Mean of all elements :  16.60                                                                                               
Variance of all elements  : 434.24                                                                                          
Standard deviation : 20.84

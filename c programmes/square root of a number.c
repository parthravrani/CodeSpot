#include <math.h>
#include <stdio.h>
 
int main(void)
{
    double num, result;
 
    printf("Enter number to find square root : ");
    scanf("%lf",&num);
    result = sqrt(num);
    printf("The square root of %lf is : %lf ", num, result);
 
    return 0;
}

========
 OUTPUT
========

Enter number to find square root : 63                                                                                       
The square root of 63.000000 is : 7.937254 

#include<stdio.h>

int main()
{
    double firstNumber, secondNumber, product; 
    printf("Enter two numbers: ");
 
    scanf("%lf %lf",&firstNumber,&secondNumber);

    product = firstNumber * secondNumber;

    printf("Product = %.2lf", product);
    return 0;
}

========
 Output
========

Enter two numbers: 2.4 1.12
Product = 2.69

#include<stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;    
    printf("Enter dividend: ");    
    scanf("%d",&dividend);    
    printf("Enter divisor: ");    
    scanf("%d",&divisor);
 
    quotient = dividend / divisor;
  
    remainder = dividend % divisor;    
    printf("\nQuotient = %d\n", quotient);    
    printf("Remainder = %d", remainder);
    return 0;
}

========
 Output
========

Enter dividend: 25
Enter divisor: 4

Quotient = 6
Remainder = 1

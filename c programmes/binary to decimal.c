#include <stdio.h>
#include <math.h>
 
int binarydecimal(int n);
 
int main()
{
   int n;
   char c;
 
   printf("Enter a binary number to convert : ");
   scanf("%d", &n);
   printf("%d in Binary = %d in Decimal", n, binarydecimal(n));
 
   return 0;
}

int binarydecimal(int n) 
 
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}

========
 OUTPUT
========

Enter a binary number to convert : 1011010                                                                                  
1011010 in Binary = 90 in Decimal

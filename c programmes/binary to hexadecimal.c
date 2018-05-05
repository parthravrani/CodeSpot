#include <stdio.h>

int main()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
    
    printf("Enter a binary number to Conver: ");
    scanf("%ld",&binaryval);
    while(binaryval !=0)
    {
        remainder = binaryval %10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i *2;
        binaryval = binaryval /10;
    }
    printf("Equivalent hexadecimal is : %lX", hexadecimalval);
    return 0;
}

========
 Output
========

Enter a binary number to Conver: 1101010                                                                                    
Equivalent hexadecimal is : 6A

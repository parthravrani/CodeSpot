#include <stdio.h>
 
int main()
{
    int i, number;
 
    printf("Enter a number to check for perfect square : ");
    scanf("%d", &number);
 
    for(i = 0; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("\nEntered number is perfect square\n");
            return 0;
        }
    }
 
    printf("\nEntered number is not perfect square\n");
    return 0;
}

========
 OUTPUT
========

Enter a number to check for perfect square : 4

Entered number is perfect square

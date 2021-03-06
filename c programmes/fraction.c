#include <stdio.h>
 
void main()
{
    double number, sum = 0, i;
 
    printf("Enter the number : ");
    scanf("%lf", &number);
 
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);
 
        if (i == 1)
        {
            printf("\n1 +");
        }
        else if (i == number)
        {
            printf(" (1 / %1f)", i);
        }
        else
        {
            printf(" (1 / %1f) + ", i);
        }
    }
 
    printf("\n\nThe sum of series is : %.2lf", sum);
    printf("\n");
}

========
 OUTPUT
========

Enter the number : 5                                                                                                        
                                                                                                                            
1 + (1 / 2.000000) +  (1 / 3.000000) +  (1 / 4.000000) +  (1 / 5.000000)                                                    
                                                                                                                            
The sum of series is : 2.28 

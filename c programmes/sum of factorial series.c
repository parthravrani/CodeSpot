#include <stdio.h> 
double sumseries(double);
 
main()
{
    double number,sum;
    printf("Enter the value : ");
    scanf("%lf", &number);
    sum = sumseries(number);
 
    printf("\nSum of the above series : %lf ", sum);
}
 
double sumseries(double m)
{
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= m; i++)
    {
        f = f * i;
        sum2 = sum2 +(i / f);
         
        if(i==m)
        {
            printf("%.2lf / %.2lf = %lf",i,f,sum2);
        }
        else
        {
            printf("%.2lf / %.2lf + \n",i,f);
        }
    }
    return(sum2);
}

========
 OUTPUT
========

Enter the value : 3                                                                                                         
1.00 / 1.00 +                                                                                                               
2.00 / 2.00 +                                                                                                               
3.00 / 6.00 = 2.500000                                                                                                      
Sum of the above series : 2.500000  

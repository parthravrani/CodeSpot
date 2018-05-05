#include <stdio.h>
#include <math.h>

int main()
{
    int a, d, n, i, tn;
    int sum =0;
    
    printf("Enter the first term value of the A.P. series: ");
    scanf("%d",&a);
    printf("Enter the total numbersin the A.P. series: ");
    scanf("%d",&n);
    printf("Enter the common difference of A.P. series: ");
    scanf("%d",&d);
    sum =(n *(2* a +(n -1)* d ))/2;
    tn = a +(n -1)* d;
    printf("Sum of the A.P series is: ");
    for(i = a; i <= tn; i = i + d )
    {
        if(i != tn)
        printf("%d + ", i);
        else
        printf("%d = %d ", i, sum);
    }
    return 0;
}

========
 Output
========

Enter the first term value of the A.P. series:  5                                                                           
Enter the total numbersin the A.P. series: 6                                                                                
Enter the common difference of A.P. series: 7                                                                               
Sum of the A.P series is: 5 + 12 + 19 + 26 + 33 + 40 = 135 

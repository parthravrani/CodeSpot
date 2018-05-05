#include <stdio.h>
#include <math.h>

int main()
{
    float a, r, i, last_term, sum =0;
    int n;
    
    printf("Enter the first term of the G.P. series: ");
    scanf("%f",&a);
    printf("Enter the total numbersin the G.P. series: ");
    scanf("%d",&n);
    printf("Enter the common ratio of G.P. series: ");
    scanf("%f",&r);
    sum =(a *(1-pow(r, n +1)))/(1- r);
    last_term = a *pow(r, n -1);
    printf("last_term term of G.P.:%f", last_term);
    printf("\nSum of the G.P.: %f", sum);
    return 0;
}

========
 Output
========

Enter the first term of the G.P. series: 5                                                                                  
Enter the total numbersin the G.P. series: 6                                                                                
Enter the common ratio of G.P. series: 4                                                                                    
last_term term of G.P.:5120.000000                                                                                          
Sum of the G.P.: 27305.000000 

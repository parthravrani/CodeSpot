#include <stdio.h>
void main()
{
    float principal_amt, rate, simple_interest;
    int time;
 
    printf("Enter the values of Principal amount, rate and time \n");
    scanf("%f %f %d", &principal_amt, &rate, &time);
 
    simple_interest = (principal_amt * rate * time) / 100.0;
 
    printf("Amount : Rs. %5.2f\n", principal_amt);
    printf("Rate : %5.2f%\n", rate);
    printf("Time : %d years\n", time);
    printf("Simple interest : %5.2f\n", simple_interest);
}

========
 OUTPUT
========

Enter the values of Principal amount, rate and time                                                                         
6000 2 4                                                                                                                    
Amount : Rs. 6000.00                                                                                                        
Rate : 2.00%                                                                                                           
Time : 4 years                                                                                                              
Simple interest : 480.00 

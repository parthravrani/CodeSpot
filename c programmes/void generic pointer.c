#include<stdio.h>
 
int main()
{
    int a=10;
    float b=35.75;
     
    void *ptr; 
     
    ptr=&a;
     
    printf("Value of integer variable is = %d",*( (int*) ptr) );
     
    ptr=&b;
     
    printf("\nValue of float variable is = %f",*( (float*) ptr) );
     
    return 0;
}

========
 OUTPUT
========

Value of integer variable is = 10
Value of float variable is = 35.750000

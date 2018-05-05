#include <stdio.h>

int main()
{
    float a, b, h;
    float area;
    
    printf("Enter the value for two bases & height of the Trapezium:\n");
    scanf("%f%f%f",&a,&b,&h);
    area =0.5*(a + b)* h ;
    printf("Area of the Trapezium is: %.3f", area);
    return 0;
}

========
 Output
========

Enter the value for two bases & height of the Trapezium:                                                                    
2 5                                                                                                                         
3 6                                                                                                                         
Area of the Trapezium is: 10.500

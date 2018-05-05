#include <stdio.h>

int main()
{
    float diagonal1, diagonal2;
    float area;
    
    printf("Enter diagonals of the Rhombus: \n");
    scanf("%f%f",&diagonal1,&diagonal2);
    
    area =0.5* diagonal1 * diagonal2;
    printf("Area of rhombus is :%.3f \n", area);
    return 0;
}

========
 Output
========

Enter diagonals of the Rhombus:                                                                                             
2                                                                                                                           
5                                                                                                                           
Area of rhombus is :5.000

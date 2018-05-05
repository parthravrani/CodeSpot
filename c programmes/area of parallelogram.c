#include <stdio.h>

int main()
{
    float base, altitude;
    float area;
    
    printf("Enter base and altitude of the Parallelogram: \n");
    scanf("%f%f",&base,&altitude);
    
    area = base * altitude;
    printf("Area of Parallelogram is: %.3f\n", area);
    return 0;
}

========
 Output
========

Enter base and altitude of the Parallelogram:                                                                               
5 6                                                                                                                         
Area of Parallelogram is: 30.000

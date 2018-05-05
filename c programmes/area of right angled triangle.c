#include <stdio.h>

int main()
{
    float height, width;
    float area;
    
    printf("Enter height and width of the Right Angled Triangle :\n");
    scanf("%f%f",&height,&width);
    
    area =0.5* height * width;
    printf("Area of the Right Angled Triangle is : %.3f\n", area);
    return 0;
}

========
 Output
========

Enter height and width of the Right Angled Triangle :                                                                       
5 2                                                                                                                         
Area of the Right Angled Triangle is : 5.000 

#include<stdio.h>
#include<math.h>

main()
{
   double a, b, c, s, area;
 
   printf("Enter the measure of the sides of Triangle: \n");
   scanf("%lf%lf%lf",&a,&b,&c);
 
   s = (a+b+c)/2;
   area = sqrt(s*(s-a)*(s-b)*(s-c));
 
   printf("\nArea of Triangle using Heron's Formula: %.2lf\n", area);
}

========
 OUTPUT
========

Enter the measure of the sides of Triangle:                                                                                 
9                                                                                                                           
8                                                                                                                           
5                                                                                                                           
                                                                                                                            
Area of Triangle using Heron's Formula: 19.90

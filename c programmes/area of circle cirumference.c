#include<stdio.h>
 
int main() {
 
   int r;
   float PI = 3.14, area;
 
   printf("Enter radius of circle: ");
   scanf("%d", &r);
 
   area = PI * r * r;
   printf("\nArea of circle : %f ", area);
 
   return (0);
}

========
 OUTPUT
========

Enter radius of circle: 5                                                                                                   
                                                                                                                            
Area of circle : 78.500000

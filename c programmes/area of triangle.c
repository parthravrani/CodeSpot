#include<stdio.h>

int main ()
{
  int h, b;
  float area;
  printf ("Enter the height of the triangle : ");
  scanf ("%d", &h);
  printf ("Enter the base of the triangle : ");
  scanf ("%d", &b);

  area = (h * b) / 2;

  printf ("The area of the triangle is: ");
  printf ("%f", area);
  return (0);
}

========
 OUTPUT
========

Enter the height of the triangle : 6                                                                                        
Enter the base of the triangle : 8                                                                                          
The area of the triangle is: 24.000000

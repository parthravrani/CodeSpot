#include <stdio.h>
 
void main()
 
{
 
  int a, b, c, i, n;
 
  a = 0;
  b = 1;
 
  printf("Enter a number to define the length of the fibonacci series : ");
  scanf("%d", &n);
  printf("\nThe Series is : \n");
  printf("%d\t%d", a, b);
 
  for (i = 0; i < n; i++)
 
  {
 
    c = a + b;
 
    a = b;
 
    b = c;
 
    printf("\t%d", c);
 
  }
 
  getch();
 
}

========
 OUTPUT
========

Enter a number to define the length of the fibonacci series : 10                                                            
                                                                                                                            
The Series is :                                                                                                             
0       1       1       2       3       5       8       13      21      34                                                 5
5       89

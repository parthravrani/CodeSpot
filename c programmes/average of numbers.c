#include<stdio.h>

void main ()
{
  int n, count;
  float sum = 0, x, avg;

  printf ("\nEnter a digit you want take average of : ");
  scanf ("%d", &n);

  for (count = 1; count <= n; count++)
    {
      printf ("");
      scanf ("%f", &x);
      sum += x;
    }
  avg = sum / n;

  printf ("\nThe Average of Numbers is : %0.2f", avg);
}

========
 OUTPUT
========

Enter a digit you want take average of : 2                                                                                  
5                                                                                                                           
6                                                                                                                           
                                                                                                                            
The Average of Numbers is : 5.50 

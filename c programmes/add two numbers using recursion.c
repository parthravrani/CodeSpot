#include <stdio.h>
#include <conio.h>

int y;
add (int m, int n)
{
  if (n == 0)
    return m;
  y = add (m, n - 1) + 1;
  return y;
}

main ()
{
  int a, b, r;
  printf ("Enter Two numbers to add\n");
  scanf ("%d%d", &a, &b);
  r = add (a, b);
  printf ("Sum of two numbers is :%d", r);
  return 0;
}

========
 OUTPUT
========

Enter Two numbers to add                                                                                                    
2 5                                                                                                                         
Sum of two numbers is :7 

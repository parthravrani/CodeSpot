#include <stdio.h>
#include <stdlib.h>
 
int  main() 
{ 
  int a, n, b = 0, t;
 
  printf("Enter a Number to check if it is an Armstrong number or not : "); 
  scanf("%d", &n); 
  t = n; 
  while (n > 0) 
  {
    a = n % 10; 
    b = b + a * a * a; 
    n = n / 10; 
  }
  if (b == t) 
  { 
    printf("Its an Armstrong number"); 
  }
 
  else 
  { 
    printf("Its Not an Armstrong number"); 
  } 
  getch(); 
  return 0; 
}

========
 OUTPUT
========

Enter a Number to check if it is an Armstrong number or not : 352                                                           
Its Not an Armstrong number

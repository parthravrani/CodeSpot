#include <stdio.h>

int main()
{
   int first, second, *p, *q, sum;
 
   printf("Enter at least a two numbers to add\n");
   scanf("%d%d", &first, &second);
 
   p = &first;
   q = &second;
 
   sum = *p + *q;
 
   printf("Sum of digits of entered number is : %d\n",sum);
   return 0;
}

========
 OUTPUT
========

Enter at least a two numbers to add                                                                                              
2 5                                                                                                                              
Sum of digits of entered number is : 7 

#include <stdio.h>
 
int main() {
 
  int n, sum = 0, remainder;
 
  printf("Enter at least a two digit number to add\n");
  scanf("%d", &n);
 
  while (n != 0) {
 
    remainder = n % 10;
    sum = sum + remainder;
    n = n / 10;
 
  }
 
  printf("Sum of digits of entered number is : %d\n", sum);
 
  return 0;
}

========
 OUTPUT
========

Enter at least a two digit number to add                                                                                         
35                                                                                                                               
Sum of digits of entered number is : 8 

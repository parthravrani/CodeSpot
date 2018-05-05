#include <stdio.h>
 
int add_digits(int);
 
int main() {
 
  int n, result;
 
  printf("Enter at least a two digit number to add\n");
  scanf("%d", &n);
 
  result = add_digits(n);
 
  printf("Sum of digits of entered number is : %d\n", result);
 
  return 0;
}
 
int add_digits(int n) {
 
  static int sum = 0;
 
  if (n == 0) {
    return 0;
  }
 
  sum = n % 10 + add_digits(n / 10);
 
  return sum;
}

========
 OUTPUT
========

Enter at least a two digit number to add                                                                                         
66                                                                                                                               
Sum of digits of entered number is : 12  

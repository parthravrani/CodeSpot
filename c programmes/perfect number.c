#include <stdio.h>
 
int main() {
 
  int n, i = 1, sum = 0;
 
  printf("Enter a number to check if it is an perfect number or not : ");
  scanf("%d", &n);
 
  while (i < n)
 
  {
 
    if (n % i == 0)
 
      sum = sum + i;
 
    i++;
 
  }
 
  if (sum == n)
    printf("number %d is a perfect number", i);
  else
    printf("number %d is not a perfect number", i);
  return 0;
 
}

========
 OUTPUT
========

Enter a number to check if it is an perfect number or not : 6
number 6 is a perfect number

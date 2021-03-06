#include <stdio.h>
 
int main() {
 
  int a, b, x, y, t, gcd, lcm;
 
  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);
 
  a = x;
  b = y;
 
  while (b != 0) {
 
    t = b;
    b = a % b;
    a = t;
 
  }
 
  gcd = a;
  lcm = (x * y) / gcd;
 
  printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
 
  return 0;
 
}

========
 OUTPUT
========

Enter two integers
2 5
Greatest common divisor of 2 and 5 = 1
Least common multiple of 2 and 5 = 10

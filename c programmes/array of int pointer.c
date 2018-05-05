#include <stdio.h>
 
const int MAX = 3;
 
int main() {
 
  int var[] = { 10, 100, 200 };
  int i, *ptr[MAX];
 
  for (i = 0; i < MAX; i++) {
 
    ptr[i] = &var[i];
  }
 
  for (i = 0; i < MAX; i++) {
 
    printf("Value of var[%d] = %d\n", i, *ptr[i]);
 
  }
 
  return 0;
}

========
 OUTPUT
========

Value of var[0] = 10
Value of var[1] = 100
Value of var[2] = 200

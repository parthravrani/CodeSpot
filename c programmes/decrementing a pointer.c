#include <stdio.h>
 
const int MAX = 4;
 
int main() {
 
  int var[] = { 10, 100, 200, 300 };
  int i, *ptr;
 
  ptr = &var[MAX - 1];
 
  for (i = MAX; i > 0; i--) {
 
    printf("Address of var[%d] = %x\n", i, ptr);
    printf("Value of var[%d] = %d\n", i, *ptr);
 
    ptr--;
 
  }
 
  return 0;
}

========
 OUTPUT
========

Address of var[4] = 84c17d8c                                                                                                
Value of var[4] = 300                                                                                                       
Address of var[3] = 84c17d88                                                                                                
Value of var[3] = 200                                                                                                       
Address of var[2] = 84c17d84                                                                                                
Value of var[2] = 100                                                                                                       
Address of var[1] = 84c17d80                                                                                                
Value of var[1] = 10 

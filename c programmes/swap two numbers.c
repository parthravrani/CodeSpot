#include <stdio.h>
 
int main() {
 
  int x, y, temp;
 
  printf("Enter the value of x and y\n");
  scanf("%d%d", &x, &y);
 
  printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
  temp = x;
  x = y;
  y = temp;
 
  printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
  return 0;
}

======== 
 OUTPUT
========

Enter the value of x and y
3 4
Before Swapping
x = 3
y = 4
After Swapping
x = 4
y = 3

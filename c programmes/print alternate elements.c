#include <stdio.h>

void main() {
 
  int array[10];
  int i, j, temp;
 
  printf("Enter 10 elements of an array :\n");
 
  for (i = 0; i < 10; i++){
 
    scanf("%d", &array[i]);
 
  }
 
  printf("\nAlternate elements of a given array :\n");
 
  for (i = 0; i < 10; i += 2){
 
    printf("%d\n", array[i]);
 
  }
 
}

========
 OUTPUT
========

Enter 10 elements of an array :
1 4 55 66 22 0 76 11 23 78

Alternate elements of a given array :
1
55
22
76
23

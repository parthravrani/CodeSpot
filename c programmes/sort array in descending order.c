#include <stdio.h>

void main() {
 
  int number[30];
  int i, j, a, n;
 
  printf("Enter the value of 'n' :\n");
  scanf("%d", &n);
  printf("Enter the numbers :\n");
 
  for (i = 0; i < n; ++i)
  {
    scanf("%d", &number[i]);
  }
 
  for (i = 0; i < n; ++i) {
 
    for (j = i + 1; j < n; ++j) {
 
      if (number[i] < number[j]) {
 
        a = number[i];
        number[i] = number[j];
        number[j] = a;
 
      }
    }
  }
 
  printf("The numbers arranged in descending order are given below :\n");
 
  for (i = 0; i < n; ++i) {
 
    printf("%d\n", number[i]);
 
  }
}

========
 OUTPUT
========

Enter the value of 'n' :                                                                                                    
4                                                                                                                           
Enter the numbers :                                                                                                         
5 6 8 9                                                                                                                     
The numbers arranged in descending order are given below :                                                                  
9                                                                                                                           
8                                                                                                                           
6                                                                                                                           
5 

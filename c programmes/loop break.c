#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 
int main()
{
  int a, b;
   
  srand(time(NULL));
  while (1) {
    a = rand() % 20; 
    printf("%d\n", a);
    if (a == 10) break;
    b = rand() % 20; 
    printf("%d\n", b);
  }
    return 0;
}

========
 OUTPUT
========

3
14
10
...

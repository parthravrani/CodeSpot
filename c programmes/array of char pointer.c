#include <stdio.h>
 
const int MAX = 5;
 
int main() {
 
  char *names[] = { "Dhoom", "Movie", "Music", "Computer", "Radio"};
  int i = 0;
 
  for (i = 0; i < MAX; i++) {
 
    printf("Value of names[%d] = %s\n", i, names[i]);
 
  }
 
  return 0;
}

========
 OUTPUT
========

Value of names[0] = Dhoom                                                                                                   
Value of names[1] = Movie                                                                                                   
Value of names[2] = Music                                                                                                   
Value of names[3] = Computer                                                                                                
Value of names[4] = Radio 

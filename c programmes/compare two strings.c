#include <stdio.h>
#include <string.h>
 
int main()
{
   char a[100], b[100];
 
   printf("Enter the first string : ");
   gets(a);
 
   printf("Enter the second string : ");
   gets(b);
 
   if( strcmp(a,b) == 0 )
      printf("Strings are equal.\n");
   else
      printf("Strings are not equal.\n");
 
   return 0;
}

========
 OUTPUT
========

Enter the first string : CodeSpot
Enter the second string : CodeSpot
Strings are equal.

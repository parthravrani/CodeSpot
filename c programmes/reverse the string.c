#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
 
   printf("Enter a string : ");
   gets(arr);
 
   strrev(arr);
 
   printf("Reversed String is : %s\n",arr);
 
   return 0;
}

========
 OUTPUT
========

Enter a string : C programming rocks                                                                                      
Reversed String is : skcor gnimmargorp C 

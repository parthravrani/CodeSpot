#include <stdio.h>
 
int main()
{
   int n, sum = 0, c, array[100];
 
   printf("Enter the 'n' numbers you want to add\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n",n);
 
   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
   }
 
   printf("Sum of entered numbers is : %d\n",sum);
 
   return 0;
}

========
 OUTPUT
========

Enter the 'n' numbers you want to add                                                                                            
2                                                                                                                                
Enter 2 integers                                                                                                                 
3 6                                                                                                                              
Sum of entered numbers is : 9


#include <stdio.h>
 
int main()
{
   int n, sum = 0, c, value;
 
   printf("Enter the number of integers you want to add : ");
   scanf("%d", &n);
 
   printf("Enter %d integers : \n",n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d",&value);
      sum = sum + value;
   }
 
   printf("Sum of entered integers : %d\n",sum);
 
   return 0;
}

========
 OUTPUT
========

Enter the number of integers you want to add : 3                                                                            
Enter 3 integers :                                                                                                          
5                                                                                                                           
8                                                                                                                           
6                                                                                                                           
Sum of entered integers : 19  

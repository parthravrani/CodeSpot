#include <stdio.h>
 
int main()
{
   int n, reverse = 0;
 
   printf("Enter a number to reverse :\n");
   scanf("%d",&n);
 
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
 
   printf("Reverse of entered number is : %d\n", reverse);
 
   return 0;
}

========
 OUTPUT
========

Enter a number to reverse :
34565
Reverse of entered number is : 56543

#include<stdio.h>
#include<string.h>
 
void concat(char[], char[]);
 
int main()
{
   char s1[100], s2[100];
 
   printf("Enter the first String : ");
   gets(s1);
   printf("Enter the second String : ");
   gets(s2);
 
   concat(s1, s2);
 
   printf("\nResulting string is : %s", s1);
 
   return (0);
}
 
void concat(char s1[], char s2[])
{
   int i, j;
 
   i = strlen(s1);
 
   for (j = 0; s2[j] != '\0'; i++, j++)
   {
      s1[i] = s2[j];
   }
 
   s1[i] = '\0';
}

========
 OUTPUT
========

Enter the first String : Code                                                                                                    
Enter the second String : Spot                                                                                                   
                                                                                                                                 
Resulting string is : CodeSpot

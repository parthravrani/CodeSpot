#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two numbers to add, subtract, multiply and divide\n");
   scanf("%d%d", &first, &second);
 
   add        = first + second;
   subtract = first - second;
   multiply = first * second;
   divide     = first / (float)second;   //typecasting
 
   printf("Addition : %d\n",add);
   printf("Subtraction : %d\n",subtract);
   printf("Multiplication : %d\n",multiply);
   printf("Division : %.2f\n",divide);
 
   return 0;
}

========
 OUTPUT
========

Enter two numbers to add, subtract, multiply and divide                                                                          
2 5                                                                                                                              
Addition : 7                                                                                                                     
Subtraction : -3                                                                                                                 
Multiplication : 10                                                                                                              
Division : 0.40

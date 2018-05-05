#include <stdio.h> 

long int factorial(int n);

void main()
{
  int n; 

  printf("Enter the number : ");
  scanf("%d", &n);
  printf("\nFactorial of %d is : %d", n, factorial(n));
  getch(); 
}
long int factorial(int n)
{
  if (n <= 1)
  {
    return (1);
  }
  else
  {
    n = n * factorial(n - 1);
    return (n);
  }
}

========
 OUTPUT
========

Enter the number : 2 
Factorial of 2 is : 4

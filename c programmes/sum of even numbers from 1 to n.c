#include<stdio.h>
 
int main()
{
    int sum=0,n;
 
    printf("Enter the number : ");
    scanf("%d",&n);
 
    sum = ((n / 2) * ( (n / 2) + 1));
 
    printf("Sum of even numbers between 1 to %d : %d",n,sum);
 
    return 0;
}

========
 OUTPUT
========

Enter the number : 100
Sum of even numbers between 1 to 100 : 2550

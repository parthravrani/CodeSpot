#include<stdio.h>
#include<conio.h>

void main()
{
    int n,r,i,sqr=0;
 
    printf("\nEnter the range of numbers : ");
    scanf("%d",&r);
 
    for(i=1;i<=r;i++){
 
    n=i;
    sqr=n*n;
    printf("\nSquare of %d is %d.",n,sqr);
 
    }
    getch();
}

========
 OUTPUT
========

Enter the range of numbers : 5

Square of 1 is 1.
Square of 2 is 4.
Square of 3 is 9.
Square of 4 is 16.
Square of 5 is 25.

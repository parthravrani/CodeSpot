#include <stdio.h>
int main()
{
    int x = 10, y = 5;
 
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
 
    x = x + y;
    y = x - y;
    x = x - y;
 
    printf("\nAfter Swapping : \nx = %d\ny = %d", x, y);
 
    return 0;
}

========
 OUTPUT
========

Enter x : 5
Enter y : 8

After Swapping
x = 8
y = 5

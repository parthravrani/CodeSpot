#include <stdio.h>
 
int main()
{
    int i, j, n;
 
    printf("Enter a number of rows : ");
    scanf("%d", &n);
 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}

========
 OUTPUT
========

Enter a number of rows : 5
*******
*******
*******
*******
*******

#include <stdio.h>
 
int main()
{
    int i,j,n,m;
 
    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("Enter a number of columns : ");
    scanf("%d", &m);
 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
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

Enter a number of rows : 3
Enter a number of columns : 6
******
******
******

#include <stdio.h>
 
int main()
{
    int i,j,a=0,n;
    printf("Enter number of lines for pattern : ");
    scanf("%d",&n);
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=n;i++)
        {
            if(j==i)
                printf ("%d ",a);
            else
                printf ("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

========
 OUTPUT
========

Enter number of lines for pattern : 5
0 1 1 1 1
2 0 2 2 2
3 3 0 3 3
4 4 4 0 4
5 5 5 5 0

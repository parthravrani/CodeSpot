#include <stdio.h>
 
int main()
{
    int i, j,n;
     
    printf("Enter number of lines in pattern : \n");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
     
    return 0;
}

========
 OUTPUT
========

Enter number of lines in pattern : 4

1
21
321
4321

#include<stdio.h>
 
int main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}

========
 OUTPUT
========

   1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1

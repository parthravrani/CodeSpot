#include <stdio.h>
 
int main()
{
    int x;
    for(x=0;x<=5;x++)
    {
        if(x&1)
            printf("%d - odd\n",x);
        else
            printf("%d - even\n",x);
    }
 
    return 0;
}

========
 OUTPUT
========

0 - even
1 - odd
2 - even
3 - odd
4 - even
5 - odd

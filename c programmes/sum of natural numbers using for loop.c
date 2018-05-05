#include<stdio.h>

int main()
{
    int n, i, sum =0;        
    printf("Enter a Natural number : ");    
    scanf("%d",&n);
    for(i=1; i <= n;++i)
    {        
        sum += i;
    }    
    printf("Sum = %d",sum);
    return 0;
}

========
 Output
========

Enter a Natural number : 100
Sum = 5050

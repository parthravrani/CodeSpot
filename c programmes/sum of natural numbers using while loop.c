#include<stdio.h>

int main()
{
    int n, i, sum =0;        
    printf("Enter a Natural number : ");    
    scanf("%d",&n);    
    i =1;
    while( i <=n )
    {        
        sum += i;++i;
    }    
    printf("Sum = %d",sum);
    return 0;
}

========
 Output
========

Enter a Natural number : 100
Sum = 5050

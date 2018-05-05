#include<stdio.h>

int main()
{
    int n, i;
    float num[100], sum =0.0, average;
    
    printf("Enter the numbers of elements : ");    
    scanf("%d",&n);
    while(n >100|| n <=0)
    {        
        printf("Error! number should in the range of (1 to 100).\n");        
        printf("Enter the number again : ");        
        scanf("%d",&n);
    }
        for(i =0; i < n;++i)
        {        
            printf("%d. Enter number : ", i+1);        
            scanf("%f",&num[i]);        
            sum += num[i];
        }    
    average = sum / n;    
    printf("Average of the numbers is = %.2f", average);
    return 0;
}

========
 Output
========

Enter the numbers of elements : 4                                                                                           
1. Enter number : 2                                                                                                         
2. Enter number : 8                                                                                                         
3. Enter number : 9                                                                                                         
4. Enter number : 4                                                                                                         
Average of the numbers is = 5.75

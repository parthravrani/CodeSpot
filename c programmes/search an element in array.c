#include<stdio.h>
 
int main()
{
    int a[30], ele, num, i;
 
    printf("\nEnter no of elements :");
    scanf("%d", &num);
 
    printf("\nEnter the values :");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nEnter the elements to be searched :");
    scanf("%d", &ele);
 
    i = 0;
    while (i < num && ele != a[i])
    {
        i++;
    }   
    if (i < num)
    {
        printf("Number found at the location = %d", i + 1);
    }
    else
    {
        printf("Number not found");
    }
 
    return (0);
}

========
 OUTPUT
========

Enter no of elements : 5                                                                                                    
                                                                                                                            
Enter the values : 22 5 6 9 8                                                                                               
                                                                                                                            
Enter the elements to be searched :6                                                                                        
Number found at the location = 3 

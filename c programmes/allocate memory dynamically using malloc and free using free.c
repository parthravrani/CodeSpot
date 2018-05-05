#include <stdio.h>
 
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter number of elements: \n");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Error! memory not allocated.");
        return 0;
    }
 
    printf("Enter elements of array: \n");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
 
    printf("Elements of array entered : ");
    for(i = 0;i<n; i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);
    return 0;
}

========
 OUTPUT
========

Enter number of elements:                                                                                                   
3                                                                                                                           
Enter elements of array:                                                                                                    
3                                                                                                                           
5                                                                                                                           
4                                                                                                                           
Elements of array entered : 3 5 4 

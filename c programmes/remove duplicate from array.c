#include<stdio.h>
 
main()
{
    int size, arr1[10], arr2[10], count = 0, i, j;
 
    printf("Enter number of elements you want to insert in array : ");
    scanf("%d",&size);
 
    printf("Enter %d integers : \n", size);
 
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size;i++)
    {
 
        for(j=0;j<count;j++)
        {
            if(arr1[i]==arr2[j])
            {
                break;
            }
        }
 
        if(j==count)
        {
            arr2[count] = arr1[i];
            count++;
        }
    }
 
    printf("Array obtained after removing duplicate elements : \n");
 
    for(i=0;i<count;i++)
    {
        printf("%d\n",arr2[i]);
    }
 
    return 0;
}

========
 OUTPUT
========

Enter number of elements you want to insert in array : 6
Enter 6 integers :
3 5 7 5 3 2
Array obtained after removing duplicate elements :
3
5
7
2

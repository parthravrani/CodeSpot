#include <stdio.h>
 
void printDistinct(int arr[], int n)
{
    int i = 0;

    for(i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
 
        if (i == j)
          printf("%d ",arr[i]);
    }
}
 
int main()
{
    int arr_size,i;
    printf("Enter array size : ");
    scanf("%d",&arr_size);
     
    int arr[arr_size];
     
    printf("Enter %d array elements : \n",arr_size);
    for(i = 0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
     
     
    printf("\n\nDistinct/Unique array elements : \n");
     
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr, n);
     
    return 0;
}

========
 OUTPUT
========

Enter array size : 10
Enter 10 array elements :
1
5
5
1
4
6
2
1
6
7


Distinct/Unique array elements :
1 5 4 6 2 7

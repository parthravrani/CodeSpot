#include <stdio.h>
 
int maxRepeating(int* arr, int n, int k)
{
    int i = 0;
 
    for (i = 0; i< n; i++)
        arr[arr[i]%k] += k;
 
    int max = arr[0], result = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
 
    return result;
}
 
int main()
{
    int arr[] = {2, 5, 3, 5, 3, 6, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
 
    printf("The maximum repeating number is : %d",maxRepeating(arr, n, k));
 
    return 0;
}

========
 OUTPUT
========

The maximum repeating number is : 5

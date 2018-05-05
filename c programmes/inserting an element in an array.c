#include <stdio.h>
 
int main()
{
    int array[100], position, c, n, value;
     
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
     
    printf("Enter %d elements : ", n);
     
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
     
    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);
     
    printf("Enter the value to insert : ");
    scanf("%d", &value);
     
    for (c = n - 1; c >= position - 1; c--)
    {
        array[c+1] = array[c];
    }
     
    array[position-1] = value;
     
    printf("Resultant array is\t");
     
    for (c = 0; c <= n; c++)
    {
        printf("%d\t", array[c]);
    }
     
    return 0;
}

========
 OUTPUT
========

Enter number of elements in array : 5                                                                                       
Enter 5 elements : 3 6 5 9 8                                                                                                
Enter the location where you wish to insert an element : 5                                                                  
Enter the value to insert : 3                                                                                               
Resultant array is      3       6       5       9       3       8 	

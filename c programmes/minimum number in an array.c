#include <stdio.h>
 
int main()
{
    int array[100], minimum, size, c, location = 1;
 
    printf("Enter the number of elements in array :\n");
    scanf("%d",&size);
 
    printf("Enter %d integers :\n", size);
 
    for ( c = 0 ; c < size ; c++ )
        scanf("%d", &array[c]);
 
    minimum = array[0];
 
    for ( c = 1 ; c < size ; c++ )
    {
        if ( array[c] < minimum )
        {
           minimum = array[c];
           location = c+1;
        }
    }
 
    printf("Minimum element is present at location %d and it's value is : %d.\n", location, minimum);
    return 0;
}

========
 OUTPUT
========

Enter the number of elements in array :                                                                                     
4                                                                                                                           
Enter 4 integers :                                                                                                          
5                                                                                                                           
6                                                                                                                           
7                                                                                                                           
3                                                                                                                           
Minimum element is present at location 4 and it's value is : 3. 

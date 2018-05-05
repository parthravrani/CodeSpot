#include <stdio.h>
 
int main ()
{
    static int array[10][10];
    int i, j, m, n;
    int counter = 0;
 
    printf("Enter the order of matix : ");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix :\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix.\n");
    }
    else
        printf("The given matrix is not a sparse matrix.\n");
    printf("There are %d number of zeros", counter);
    return 0;
}

========
 OUTPUT
========

Enter the order of the matix : 3 3
Enter the co-efficients of the matix
 4 8 0
 0 0 3
 0 1 0
The given matrix is sparse matrix
There are 5 number of zeros

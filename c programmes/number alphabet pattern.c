#include<stdio.h>
 
int main()
{
    int num,r,c;
    int i=1;
    char ch='A';
 
    printf("Enter number of rows : ");
    scanf("%d", &num);
 
    for(r = 1; r <= num; r++)
    {
        for(c = 1; c <= r; c++)
        {
            if(r%2==0)
            {
                printf(" %c",ch++);
            }
            else
            {
                printf(" %d",i++);
            }
        }
 
        printf("\n");
    }
 
    return 0;
}

========
 OUTPUT
========

Enter number of rows : 6

 1
 A B
 2 3 4
 C D E F
 5 6 7 8 9
 G H I J K L

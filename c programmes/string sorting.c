#include<stdio.h>
 
int main()
{
    int i,j,n;
    char str[20][20],temp[20];
 
    printf("Enter the no. of string to be sorted : ");
    scanf("%d",&n);
 
    for(i=0;i<=n;i++)
        gets(str[i]);
 
    for(i=0;i<=n;i++)
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
 
    printf("\nThe sorted string");
    for(i=0;i<=n;i++)
        puts(str[i]);
 
    return 0;
}

========
 OUTPUT
========

Enter the no. of string to be sorted : 5
Bill Gates
Larry Page
Harry Potter
Mark Zuck
John

The sorted string
Bill Gates
Harry Potter
John
Larry Page
Mark Zuck

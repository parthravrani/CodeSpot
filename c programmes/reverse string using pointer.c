#include <stdio.h>
 
int main()
{
    char str_array[10000], *ptr;
    int i, len;
     
    printf("Enter a string : ");
    gets(str_array);
    ptr = str_array;
     
    for(i=0;i<10000;i++)
    {
        if(*ptr == '\0')
        break;
        ptr++;
    }
     
    len = i;
    ptr--;
    printf("Reversed String is : ");
    for(i=len; i>0; i--)
    {
        printf("%c",*ptr--);
    }
    return 0;
}

========
 OUTPUT
========

Enter a string : C programming rocks                                                                                      
Reversed String is : skcor gnimmargorp C 

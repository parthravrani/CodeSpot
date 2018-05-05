//A predefined macro __FILE__ contains the location of a C programming file, it is working on. For example:

#include <stdio.h>
int main()
{
   printf("%s",__FILE__);
}

/*
*The output of this program is the location of this C programming file.
*C program to display its own source code using __FILE__
*/

#include<stdio.h>
int main()
{    
    FILE *fp;
    char c;    
    fp = fopen(__FILE__,"r");
    do
    {         
        c = getc(fp);         
        putchar(c);
    }
    while(c != EOF);    
    fclose(fp);
    return 0;
}

/*
*This program displays the content of this particular C programming file(source code) because __FILE__ contains the location of this C programming file in a string.
*/

#include <stdio.h>
 
main()
{
    int i = 5;
 
    do{
       printf("Hello World %d\n", i );
       i = i -1;
    }
    while ( i > 0 );
}

========
 OUTPUT
========

Hello World 5
Hello World 4
Hello World 3
Hello World 2
Hello World 1

#include <stdio.h>
#include <time.h>
 
int main()
{
    time_t t;
    time(&t);
 
    printf("Today's date and time : %s",ctime(&t));
 
    return 0;
}

========
 OUTPUT
========

Today's date and time : Wed Dec 29 14:30:21 2017

#include <stdio.h>
 
int main ()
{
   int  var = 65; 
   int  *ip;   
 
   ip = &var; 
 
   printf("Address of var variable : %x\n", &var  );
 
   printf("Address stored in ip variable : %x\n", ip );
 
   printf("Value of *ip variable : %d\n", *ip );
 
   return 0;
}

========
 OUTPUT
========

Address of var variable : d7802f1c                                                                                          
Address stored in ip variable : d7802f1c                                                                                    
Value of *ip variable : 65 

#include<stdio.h>
 
int main()
{
  int n=5,r,c;
   
  for(r=1; r<=6; r++,n--)
  {
    for(c=1; c<=n; c++)
    {
      printf(" #");
    }
     
    for(c=1; c<=r; c++)
    {
      if(c==1)
      {
        printf(" *");
      }
      else
      {
        printf(" #");
      }
    }
     
    for(c=r; c>1; c--)
    {
      if(c==2)
      {
        printf(" *");
      }
      else
      {
        printf(" #");
      }
    }
 
    for(c=n; c>=1; c--)
    {
      printf(" #");
    }
     
    printf("\n");
  }
   
  return 0;
}

========
 OUTPUT
========

#####*#####
####*#*####
###*###*###
##*#####*##
#*#######*#
*#########*

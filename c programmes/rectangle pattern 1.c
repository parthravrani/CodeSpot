#include<stdio.h>
 
int main()
{
  int num,c,sp,r=1;
 
  printf("Enter loop repeat number(rows) : ");
  scanf("%d",&num);
 
  printf("\n");
  for(; num>=1; num--,r++)
  {
    for(c=1; c<=num; c++)
    {
      printf("%d",c);
    }
 
    for(sp=r; sp>1; sp--)
    {
      printf("_");
    }
 
    for(sp=r; sp>1; sp--)
    {
      printf("_");
    }
 
    for(c=num; c>=1; c--)
    {
      printf("%d",c);
    }
     
    printf("\n");
  }
   
  return 0;
}

========
 OUTPUT
========

Enter loop repeat number(rows) : 5 
1234554321 
1234__4321 
123____321 
12______21 
1________1

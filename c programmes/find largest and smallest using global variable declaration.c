#include<stdio.h>

int a,b;  
int main()
{
  printf("Enter the two values to find the greatest and the smallest number : ");
  scanf("%d%d",&a,&b);

  if(a<b)    
  {
    printf("\nThe Largest number is : %d",b);
    printf("\nThe Smallest number is : %d",a);
  }
  else if(a==b)
    {
        printf("Both are Equal");
    }
  else
    {
    printf("\nThe Largest number is : %d",a);
    printf("\nThe Smallest number is : %d",b);
  }
}

========
 OUTPUT
========

Enter the two values to find the greatest and the smallest number : 6 5                                                     
                                                                                                                            
The Largest number is : 6                                                                                                   
The Smallest number is : 5

#include <stdio.h>
#include <conio.h>
 
int main()
{
   int arr[30];
   int i,j,k,tmp,num;
   printf("Enter total no. of elements : ");
   scanf("%d", &num);
   for(k=0; k<num; k++)
  {
     printf("\nEnter %d number : ",k+1);
     scanf("%d",&arr[k]);
  }
 
  for(i=num/2; i>0; i=i/2)
  {
    for(j=i; j<num; j++)
    {
      for(k=j-i; k>=0; k=k-i)
      {
        if(arr[k+i]>=arr[k])
          break;
        else
        {
          tmp=arr[k];
          arr[k]=arr[k+i];
          arr[k+i]=tmp;
        }
      }
    }
  }
 
  printf("\nSorted : ");
  for(k=0; k<num; k++)
    printf("%d\t",arr[k]);
  getch();
  return 0;
}

========
 OUTPUT
========

Enter total no. of elements : 3

Enter 1 number : 4

Enter 2 number : 6

Enter 3 number : 1

Shell Sorting : 1       4       6

#include<stdio.h>

int main(){
int n,num,i;
int big;
 
  printf("Enter the values of n : ");
  scanf("%d",&n);
 
  printf("Number %d : ",1);
  scanf("%d",&big);
 
  for(i=2;i<=n;i++){
    printf("Number %d : ",i);
    scanf("%d",&num);
 
    if(big<num)
      big=num;
  }
 
  printf("Largest number is: %d",big);
  return 0;
}

========
 OUTPUT
========

Enter the values of n : 3                                                                                                    
Number 1 : 3                                                                                                                
Number 2 : 6                                                                                                                
Number 3 : 5                                                                                                                
Largest number is: 6

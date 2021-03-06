#include<stdio.h>
 
int main(){
 
  int a[3][3],i,j;
 
  long determinant;
 
  printf("Enter the 9 elements for 3x3 matrix :\n");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&a[i][j]);
 
  printf("The entered matrix is :");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }
 
  determinant = a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2]))
                -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2])
                + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
 
  printf("\nDeterminant of 3x3 matrix : %ld",determinant);
 
   return 0;
}

========
 OUTPUT
========

Enter the 9 elements for 3x3 matrix :                                                                                       
5 2 3                                                                                                                       
9 6 7                                                                                                                       
6 2 8                                                                                                                       
The entered matrix is :                                                                                                     
5       2       3                                                                                                           
9       6       7                                                                                                           
6       2       8                                                                                                           
Determinant of 3x3 matrix : 56 

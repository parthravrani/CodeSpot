#include<stdio.h>
 
void reduction(float a[][6], int size, int pivot, int col)
{
   int i, j;
   float factor;
   factor = a[pivot][col];
 
   for (i = 0; i < 2 * size; i++)
   {
      a[pivot][i] /= factor;
   }
 
   for (i = 0; i < size; i++)
   {
      if (i != pivot)
      {
         factor = a[i][col];
         for (j = 0; j < 2 * size; j++)
         {
            a[i][j] = a[i][j] - a[pivot][j] * factor;
         }
      }
   }
}
 
void main()
{
   float matrix[3][6];
   int i, j;
 
   for (i = 0; i < 3; i++) 
   {
      for (j = 0; j < 6; j++) 
      {
         if (j == i + 3) 
         {
            matrix[i][j] = 1;
         } 
         else
         {
            matrix[i][j] = 0;
         }
      }
   }
 
   printf("Enter a 3x3 matrix : \n");
   for (i = 0; i < 3; i++) 
   {
      for (j = 0; j < 3; j++) 
      {
         scanf("%f", &matrix[i][j]);
      }
   }
 
   for (i = 0; i < 3; i++) 
   {
      reduction(matrix, 3, i, i);
   }
 
   printf("\nInversed matrix : ");
   for (i = 0; i < 3; i++)
   {
      printf("\n");
      for (j = 0; j < 3; j++)
      {
         printf("%8.3f", matrix[i][j + 3]);
      }
   }
}

========
 OUTPUT
========

Enter a 3x3 matrix :                                                                                                        
2 5 6                                                                                                                       
5 6 9                                                                                                                       
2 4 6                                                                                                                       
                                                                                                                            
Inversed matrix :                                                                                                           
  -0.000   0.500  -0.750                                                                                                    
   1.000   0.000  -1.000                                                                                                    
  -0.667  -0.167   1.083 

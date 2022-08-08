#include <stdio.h>

void elements(int matrix[][10], int row, int column) 
{
   printf("\nEnter the elements: \n");
   for (int i = 0; i < row; ++i) 
   {
      for (int j = 0; j < column; ++j) 
      {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

void multiplication(int first[][10], int second[][10], int res[][10],int r1, int r2, int c1, int c2) 
{
   for (int i = 0; i < r1; ++i) 
   {
      for (int j = 0; j < c2; ++j) 
      {
         res[i][j] = 0;
      }
   }

   for (int i = 0; i < r1; ++i)
    {
      for (int j = 0; j < c2; ++j) 
      {
         for (int k = 0; k < c1; ++k) 
         {
            res[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

void display(int res[][10], int row, int column) 
{
   printf("\nMultiplied Matrix is:\n");
   for (int i = 0; i < row; ++i) 
   {
      for (int j = 0; j < column; ++j) 
      {
         printf("%d  ", res[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

int main() 
{
   int first[10][10], second[10][10], res[10][10], r1, r2, c1, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d%d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d%d", &r2, &c2);

   while (c1 != r2) 
   {
      printf("Error! Multiplication not possible :/\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }

   elements(first, r1, c1 );
   elements(second, r2, c2);
   multiplication(first, second, res, r1, c1, r2, c2);
   display(res, r1, c2);

   return 0;
}
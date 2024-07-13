#include <stdio.h>
#define N 50

int  main() 
{
    int row,col,i,j;
    int arr[N][N]; 
   
    printf("enter the rows &cols of the matrix a: ");
    scanf("%d %d",&row, &col);
    printf("enter the element of matrix a:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int sum, totalSum=0;

   for (i=0; i<3; i++)
   {
      sum=0;
      for (j=0; j<3; j++)
      {
         sum+=arr[i][j];
      }
      printf("Sum of row %d: %d\n", i, sum);
     totalSum += sum;
    
   }
    printf("total Sum of rows : %d\n",totalSum);
}
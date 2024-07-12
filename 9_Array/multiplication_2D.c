#include<stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], result[N][N]; 
    int arow, acol ,brow, bcol;
    int i,j,k;
    int sum = 0;

//matrix a
    printf("enter the rows &cols of the matrix a: ");
    scanf("%d %d",&arow, &acol);
    printf("enter the element of matrix a:\n");
    for(i=0; i<arow; i++)
    {
        for(j=0; j<acol; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

//matrix b
    printf("enter the rows &cols of the matrix b: ");
    scanf("%d %d",&brow, &bcol);
    printf("enter the element of matrix b:\n");
    for(i=0; i<brow; i++)
    {
        for(j=0; j<bcol; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //for multiplication
    for(i=0; i<arow; i++)
    {
        for(j=0; j<bcol; j++)
        {
            for(k=0; k<brow; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
//printing the array - result
    printf("resultant matrix: \n");
    for(i=0; i<arow; i++)
    {
        for(j=0; j<bcol; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    
    }
}
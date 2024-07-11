#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)   //Rows
    {
        for(int j=rows; j>i; j--)   //whitespace
        {
            printf(" ");
        }
        for(int k=1; k<i; k++)   //printing star or number
        {
           // printf("* ");
            printf("%d ",k);   //printing number
           // printf("%c ",'A' + k);  //for alphabate
        }
        printf("\n");
    } 
}
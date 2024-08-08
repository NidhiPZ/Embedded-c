#include<stdio.h>
//#define N 5
int main()
{
    int N; 
    printf("enter the size of array:");
    scanf("%d", &N); 
    int a[N];
    int i, j, temp;
    int arr[N];

    printf("enter the number:");
    for ( i = 0; i < N; i++)
    {
    scanf("%d",&arr[i]);
    }

    for ( i = 0; i < N; i++)
    {
        for (j=i+1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sorted in Ascending element is:\n");
    for ( i = 0; i < N; i++)
    {
        printf("at index arr[%d] = %d \n", i, arr[i]);
    }
    
    
    
}
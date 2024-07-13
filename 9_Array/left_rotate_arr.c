#include<stdio.h>
int main()
{
    int N;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int arr[N];
    int i,j,pos, temp;

    printf("enter the element of array:");
    for(i=0; i<N; i++)
    {
        printf("index[%d] = ", i);
        scanf("%d",&arr[i]);
       
    }
     printf("before shifting: \n" );
     for(i=0; i<N; i++)
     {
          printf("%d ",arr[i]);
     }
    printf("\nenter the position by shifted : ");
    scanf("%d", &pos);

    for ( j = 0; j < pos; j++)
    {
        temp = arr[0];
        for(i=0; i<N-1; i++)
        {
           arr[i] = arr[i+1];
        }
        arr[i] = temp;
    }
    printf("after left shifting :\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
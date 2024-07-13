#include<stdio.h>
int main()
{
    int size= 0;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    int i,j,pos,temp;

    printf("enter the element of array:");
    for(i=0; i<size; i++)
    {
        printf("index[%d] = ", i);
        scanf("%d",&arr[i]);
       
    }
     printf("before deleting: \n" );
     for(i=0; i<size; i++)
     {
          printf("%d ",arr[i]);
     }
    printf("\ndelete at index: ");
    scanf("%d", &pos);

    for(i =pos; i<size; i++)
    {
        arr[i] =arr[i+1];    
    }
    size--;
   
   
    printf("after deleting: \n" );
    for(i=0; i<size; i++)
     {
        printf("%d ",arr[i]);
     }
}

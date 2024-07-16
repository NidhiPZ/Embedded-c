#include<stdio.h>
int main()
{
    int size= 0;
    printf("enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    int i,j,index,new;

    printf("enter the element of array:");
    for(i=0; i<size; i++)
    {
        printf("index[%d] = ", i);
        scanf("%d",&arr[i]);
       
    }
     printf("before adding: \n" );
     for(i=0; i<size; i++)
     {
          printf("%d ",arr[i]);
     }
    printf("\nAdd at index: ");
    scanf("%d", &index);
    
    printf("Add new number: ");
    scanf("%d", &new);

    for(i =size; i>=index; i--)
    {
        arr[i] =arr[i-1];    
    }
    arr[index]= new;
    size++;
   
   
    printf("after adding size of array : %d \n",size );
    for(i=0; i<size; i++)
     {
        printf("%d ",arr[i]);
     }
}

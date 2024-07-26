//malloc() & realloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int n,i;
    // printf("Enter number of elements:");
    // scanf("%d",&n);
    int i;

    // Dynamically allocate memory using malloc()
    int *ptr = (int*)malloc(2 * sizeof(int));

    if(ptr == NULL)
    {
        printf("memory is not available");
        exit(1);
    }
    printf("enter the number:\n");
    for(i=0; i<2; i++)
    {
        scanf("%d",&ptr[i]);
    }
    //memory reallocatation for 2 more integer using realloc()
    ptr =(int*) realloc (ptr, 4 * sizeof(int));
     if(ptr == NULL)
    {
        printf("memory is not available");
        exit(1);
    }
    printf("enter the number:\n");
    for(i=2; i<4; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("elements of array: \n");
    for(i=0; i<4; i++)
    {
      printf("%d ",ptr[i]);
    }


}
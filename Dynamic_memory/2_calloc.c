//calloc() & free()
#include<stdio.h>
#include<stdlib.h>

int *input()
{
    int *ptr, i;
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(5,sizeof(int));
    printf("enter the elements: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
int main()
{
    int i, sum=0;
    int *ptr = input();
    for(i=0; i<5; i++)
    {
        sum += *(ptr+i);
    }
    printf("sum is: %d", sum);
 
    free(ptr);   // Free the memory
    ptr=NULL;
}
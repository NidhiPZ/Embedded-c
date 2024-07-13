#include<stdio.h>

int max(int *arr , int length);
int main()
{
    int arr[]={1, 2, 4, 8, 12, 10, 15, 11};
    int length= sizeof(arr)/sizeof(int);
    int max_num = max(arr, length);
    printf("max: %d", max_num);
}

int max(int *arr, int length)
{
    int max=*arr;  // Initialize max with the first element of the array
    for(int i = 0; i<length; i++)
    {
        printf("arr[%d] : %d\n", i, (*arr));
        if((*arr)>max)        
         {
            max = (*arr);
        }       
        arr++;  // Move the pointer to the next element
        }
        return max;

}
#include<stdio.h>
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int i;
    //orignal order
    for (i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //reverse order
    for (i = 8; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
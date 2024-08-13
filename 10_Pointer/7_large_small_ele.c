#include<stdio.h>
void min_max(int a[], int len, int *min, int *max); 

void min_max(int a[], int len, int *min, int *max)
{
    *min = *max = a[0];
    for(int i=1; i<len; i++)
    {
        if (a[i] > *max)
            *max=a[i];
        if (a[i] < *min)
            *min=a[i];
    }
}
int main()
{
    int arr[] = {1,2,4,12,15,17,25,8,4};
    int min, max, len;
    len = sizeof (arr) / sizeof arr[0];
    min_max (arr,len,&min,&max);
    printf("max value is : %d \n",max);
    printf("min value is : %d ",min);
}
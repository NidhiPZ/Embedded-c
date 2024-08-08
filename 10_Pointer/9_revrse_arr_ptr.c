#include<stdio.h>
int main()
{
    int n, *p;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for ( p = arr; p < arr+n; p++)
    {
        scanf("%d",p);
    }

    for(p = arr+n-1; p >= arr; p--)
    {
        printf("%d ",*p);
    }
}

/* arr = &arr[0]
   arr+n = &arr[4] 
*/
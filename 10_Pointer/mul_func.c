#include<stdio.h>
int mul(int arr[],int n)
{
    int mul=1, i;
    for(i=0; i<n; i++)
    {
        mul *= arr[i];
    }
    return mul;

}
int main()
{
    int n, i ;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

      for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=mul(arr, n);
    printf("mul of element is : %d", result );
}
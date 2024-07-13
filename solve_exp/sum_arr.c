#include<stdio.h>
int main()
{
int n, i, sum=0;
printf("enter the size od arr:");
scanf("%d",&n);
int arr[n];
printf("enter the element of the array:\n");
for (i=0; i<n; i++)
{
    printf("index[%d] = ",i);
    scanf("%d", &arr[i]);
}
for(i=0; i<n; i++)
{
    sum += arr[i];
}
printf(" sum of array is: %d",sum);

}
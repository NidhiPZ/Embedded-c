#include<stdio.h>
int main()
{
    int n;
    printf("entr the size of arr: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum = 0, *p;
    //for (p = &arr[0]; p < &arr[n]; p++)  //insted of this &arr[0] address assignment
    for (p  = arr; p < arr + n; p++)  // we can simply doing with array name arr give the address of the arr[0] nd arr + n ->arr + 5 
    {
        sum += *p;
    }
    printf("sum is: %d ",sum);

}
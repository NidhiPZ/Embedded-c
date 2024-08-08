#include <stdio.h>
int main()
{
    int N; 
    printf("enter the size of array:");
    scanf("%d", &N); 
    int a[N];
    int i;
     printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }

    int min=a[0];
    int max=a[0];

    //Traverse the array
    for(i=1; i<N; i++)
    {
        if(min>a[i])
        min=a[i];

        if(max<a[i])
        max=a[i];
    }
    printf("minimum is : %d\n",min);
    printf("maximum is : %d",max);
}
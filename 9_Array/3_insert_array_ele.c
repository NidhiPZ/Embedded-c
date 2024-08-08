//insert values in array and display values of array.
#include<stdio.h>
int main()
{
    int N; 
    printf("enter the size of array:");
    scanf("%d", &N); 
    int a[N];
    int i;

    printf("enter the array element:\n");
    for (i=0; i<N; i++)
    {
        printf("index[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("The values in the array are: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
}
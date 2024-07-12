# include<stdio.h>
#define N 6
int main()
{
    int i,j,temp;
    int a[N];

    printf("enter the numbers: \n");
    for ( i = 0; i < N; i++)
    {
        scanf(" %d\n", &a[i]);
    }
    for (i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
    printf("sorted in Descanding order:\n");
    for ( i = 0; i < N; i++)
    {
        printf("at index a[%d] = %d\n",i,a[i]);
    }
    
    
}
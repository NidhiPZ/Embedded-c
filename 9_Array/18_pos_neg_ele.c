#include<stdio.h>
int main()
{
    int N, i;
    printf("enter the size of element: ");
    scanf("%d",&N);
    int arr[N];
    int pcnt=0, ncnt=0;
    int e_cnt=0, o_cnt=0;

    printf("enter the -ve & +ve element : \n");
    for (i=0; i<N; i++)
    {
        printf("index[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    //for negative & postive number
    for (i=0; i<N; i++)
    {
        if (arr[i] > 0 )
        { 
            pcnt++;
        }
        else if (arr[i] < 0)
        {
         ncnt++;    
         }
    }
     printf("positive numbers: %d \n",pcnt);
     printf("negative numbers: %d \n",ncnt);

    //for odd & even number
     for(int i=0; i<N; i++)
     {
     if(arr[i]%2==0)
       {
        e_cnt++;
        }
     else 
       {
         o_cnt++;
        }
     }

    printf("even numbers: %d \n",e_cnt);
    printf("odd numbers: %d ",o_cnt);
}
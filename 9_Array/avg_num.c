#include<stdio.h>
int main()
{
    int arr[5];
    int i, sum=0;
    float avg;
    
    //enter number from the user
     printf("enter the number:");
    for (i = 0; i<5; i++)
    {      
        scanf("%d", &arr[i]);
    }
 
    for(i=0; i<6; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / 5;
    printf("avg is :%.2f",avg);

}
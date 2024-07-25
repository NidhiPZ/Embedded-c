#include<stdio.h>
int main()
{
    int num, pos, result;
    printf("enter the num:");
    scanf("%d",&num);
    printf("enter the pos:");
    scanf("%d",&pos);

    result = num & 1<<pos;
    if (result == 0)
        printf("bit is clear");
    else 
        printf("bit is set");
}

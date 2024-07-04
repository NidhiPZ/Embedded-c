#include<stdio.h>
int main()
{
    int price, qnt, total;
    printf("enter the price:");
    scanf("%d",&price);   //The scanf() function reads the user input during the runtime
    printf("enter the qnt:");
    scanf("%d",&qnt);
    total = price * qnt;
    printf("total is : %d",total);
}
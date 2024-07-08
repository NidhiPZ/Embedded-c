//Addition without + operator
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter the two number:");
    scanf("%d",&num1);
    scanf("%d",&num2);

    while(num2 != 0)
    {
        num1++;
        num2--;
    }
    printf("sum of two num is %d:",num1 );
}
#include<stdio.h>
int main()
{
    int a, b, result, num;
    printf("enter the number:");
    scanf("%d",&num);

    a=0;
    b=1;

    for(int i = 1; i <= num; i++)
    {
        printf("%d ",a);
        result = a + b;
        a=b;
        b=result;
    }

}
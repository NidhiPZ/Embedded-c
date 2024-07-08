#include<stdio.h>
int main()
{
    int num, q, cnt, count=0, mul = 1, rem, result=0;
    printf("enter the num:");
    scanf("%d",&num);

    q=num;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=num;

    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul * rem;
            cnt--;
        }
        result= result + mul;
        cnt = count;
        q=q/10;
        mul=1;
    }
    if(result == num)
    printf("%d is a armstrong num.", num);
    else
    printf(" is not a armstrong num.",num);
}
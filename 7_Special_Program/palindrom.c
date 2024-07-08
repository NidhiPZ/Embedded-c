#include<stdio.h>
int main()
{
    int num ,q , rem, result=0;

    printf("enter the num:");
    scanf("%d",&num);

    q = num;
    while(q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }
     if(result == num)
        printf("%d is palimdrome number", num);
        else
        printf("%d is not a palimdrome number", num);


}
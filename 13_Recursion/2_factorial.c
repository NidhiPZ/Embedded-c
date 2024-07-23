#include<stdio.h>

int func(int n);

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    int fact = func(num);
    printf("factrorial of %d is : %d",num,fact);
}

int func(int n)
{
    if (n == 0)
        return 1;
    else
        return n * func(n-1);
 }
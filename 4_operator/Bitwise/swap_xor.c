//swapping 2 number using ex-or(^) operator
#include<stdio.h>
int main()
{
    int a=3, b=4;
    printf("brfore swap a=%d and b=%d\n",a, b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swap a=%d and b=%d",a, b);
}
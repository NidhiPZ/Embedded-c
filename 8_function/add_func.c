#include<stdio.h>

int sum(int a, int b);   //declaration of function 

int main()  //main function
{
    int result, x, y;
    printf("enter thr 2 num:");
    scanf("%d %d",&x, &y);
    result = sum(x, y);   // function calling
    printf("sum of 2 number is : %d", result);
}

int sum(int a, int b)   // function defination
{
    return a + b;       //return the a+b value
}
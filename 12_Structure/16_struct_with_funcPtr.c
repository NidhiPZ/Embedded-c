#include <stdio.h>
struct calculator
{
    int (*addition)(int, int);
    int (*subtraction)(int, int);
    int (*multiplication)(int, int);
};

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{
    struct calculator cal;
    int a,b;
    int result;
    printf("enter two number:");
    scanf("%d %d",&a,&b);

    cal.addition=&add;     //assigning the function pointer to the function
    result= cal.addition(a,b);
    printf("%d+%d = %d\n",a,b, result);

    cal.subtraction = &sub;
    result = cal.subtraction(a,b);
    printf("%d-%d = %d\n",a,b, result);


    cal.multiplication=&mul;
    result = cal.multiplication(a,b);
    printf("%d*%d = %d\n",a,b, result);



}
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
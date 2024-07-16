//addition using the function pointer
#include<stdio.h>
int add();

int add()
{
    int a,b;
    printf("enter the two number: ");
    scanf("%d %d",&a, &b);
    return a+b;
}
int main()
{
    int result;
    int (*ptr)();      //declares a pointer to a function that takes no arguments and returns an int.
    ptr = &add;          //assigns the address of the add function to ptr.
    result = (*ptr)();    //dereferences the function pointer and calls the add function.
    printf("the sum is %d", result);
}
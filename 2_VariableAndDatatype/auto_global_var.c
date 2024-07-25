#include<stdio.h>
int var;   //declare global variable
int main()
{
    auto int var1;  // declare auto variable
    printf("local/auto variable=%d\n",var1);  //initialize with garbage value
    printf("global variable=%d",var);  //initialize with 0
}


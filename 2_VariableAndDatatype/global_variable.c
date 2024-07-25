#include<stdio.h>

int fun();
int var = 10;  //global variable

    int main()
    {
        int var = 5;   //local variable
        printf("%d\n",var);
        fun();
    }
    int fun()
    {
        printf("%d",var);
    }

#include<stdio.h>
int main()
{
    int var;
    int num;
     num = (var = 15, var+35);
     printf("%d", num);
     return 0;
}

/*comma operator evaluates expressions from left to right.
First, var = 15 assigns 15 to var, the value of var is 15.
Then, var + 35 adds 35 to var,so var + 35 evaluates to 50.*/
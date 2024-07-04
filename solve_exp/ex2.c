#include<stdio.h>
int main()
{
    int var = 052;  //when we place 0 in front of any value its treats as a octal number
    printf("num of var is= %d\n", var);    // here we print %d value.. ans is 42
    
    printf("num of var is= %o", var);  //%o is octal num specifier ans is 52
    return 0;
}
#include<stdio.h>
int main()
{
    int var = 72;
    int var1 = 56;
    int num;

    num = sizeof(var) ? (var1 > 23 ? ((var == 72) ? 'A' : 0) : 0) : 0;
    printf("%d", num);
    return 0;
}

/* 1. ternary operator evolusion: sizeof(var) is 4 (which is non-zero), the condition is true.
   2. move to the nested ternary operation: (var1 > 23 ? ... : 0).
   3. inner most ternary operation:((var == 72) ? 'A' : 0).
    Therefore, ((var == 72) ? 'A' : 0) var=72 -> 72 ==72 -> results in 'A'
    num holds the ASCII value of 'A', which is 65 */
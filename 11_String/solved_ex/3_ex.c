#include<stdio.h>
#include<string.h>
void foo(char *a)
{
    if(*a && *a != ' ')
    {
        foo (a+1);    // Recursive call with the next character
        putchar(*a);   // prtint char after the recursion
        } 
}
int main()
{
    char a[]= "ABCD EFGH";
    foo(a);   // Pass the array directly
}

/*
if(*a && *a != ' ')
a[0]= A so both condition are true
foo(a+1)
   A           <-   B       <-   C       <-  D    <-|   blank 
foo(1000) ->  foo(1001) -> foo(1002) -> foo(1003) -> foo(1004) -> its a blankspace a != ' '
so,putchar(*a): After returning from the recursion (when the end of the string or a space is reached), it prints the current character.
 output is -> DCBA
*/
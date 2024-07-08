#include <stdio.h>

// error (global scope)
//register int x = 10;

int main()
{
    // works (inside a block)
    register int i = 10;
    printf("%d\n", i);

   //printf("%d", x);
    return 0;
}
/*The reason for this error is due to changes in the C standard. In older versions of C (prior to C99), you could declare variables with the register keyword at file scope (global scope). However, in C99 and later standards, this is no longer allowed. 
Therefore, attempting to declare a global variable with register will result in a compiler error in modern C compilers. If you need a variable to be treated in a special way by the compiler for optimization purposes, you should rely on compiler optimizations rather than using the register keyword explicitly.*/
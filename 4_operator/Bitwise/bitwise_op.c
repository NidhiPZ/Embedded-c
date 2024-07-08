//use of bitwise operators
#include <stdio.h>
int main()
{
    // a = 5(00000101), b = 9(00001001)
     unsigned a = 5, b = 9;

    // The result is 00000001 = 1
    printf("a = %u, b = %u\n", a, b);
    printf("a&b = %u\n", a & b);

    // The result is 00001101 = 13
    printf("a|b = %u\n", a | b);

    // The result is 00001100 = 12
    printf("a^b = %u\n", a ^ b);

    // The result is 11111010 
    printf("~a = %u\n", a = ~a);

    // The result is 00010010 = 18
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100 = 4
    printf("b>>1 = %u\n", b >> 1);

    return 0;
}

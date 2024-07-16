#include<stdio.h>
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
 void main()
 {
    int c, *b, **a;
    c =4, b =&c, a =&b;
    printf("%d", f(c, b, a));
 }

 /*
 c->x=4,  *b->*py = addof c ,    **a-> **ppz = add of b
 now, **ppz += 1 -> 4+1 =5
 z = **ppz = 5
 now value is updated c = 5;
 *py += 2 -> 5 + 2 = 7
 y = *py = 7
 x += 3 -> 4 + 3 = 7
 x + y + z = 7 + 7 + 5 = 19
 */
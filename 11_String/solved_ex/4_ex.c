#include<stdio.h>
#include<string.h>
int main()
{
    char *c = "GATECSIT2017";
    char *p = c;
    printf("%d", (int)strlen(c+2[p]-6[p]-1));
    return 0;
}
/*
    assume address start with c[0]=1000
    (int)strlen(c+2[p]-6[p]-1)
               (1000+ T - I - 1)
               (1000+ 84 - 73 -1)
               (1000 + 10) ->1010
               at 1010 -> c[1010]-> 1 
    (int)strlen([1010]) -> lenth count from the 1010 add so its 1 7 \0 so ->2 didn't count \0 null
    (int) 2 
    output is ->2                         
               */


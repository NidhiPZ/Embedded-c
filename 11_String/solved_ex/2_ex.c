#include<stdio.h>
#include<string.h>
int main()
{
    char c[] = "GATE2011";
    char *p = c;
    printf("%s", p + p[3]-p[1]);

}

/*
c = [G A T E 2 0 1 1 \0]
     0 1 2 3 4 5 6 7 8 
p points to -> c[0]
assume the add of c[0] = 100
p  + p[3] - p[1]
p = 100 -> 100 + E - A   // char represent as integer only, so asci value
           100 + 69 - 65 = 104
now the value print from add 104 is 2 and onword
so the output is --> 2011
*/
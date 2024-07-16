#include<stdio.h>
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}
int i=0, j=1;
int main()
{
    f(&i ,&j);
    printf("%d %d" ,i , j);
}

/*
i = 0,  j = 1
here suppose add of i is 1000 nd j is 20000
pass the addresh to the pointer p->1000 nd q->2000
                                 p =0         q=1
p = q -> p = 2000
now chage the value of *p = 2 -> q = 2
output is: 0 2
*/
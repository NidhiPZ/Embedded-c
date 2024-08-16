#include<stdio.h>
struct point
{
    int a;
    int b;
};

void print(struct point p);
struct point edit(struct point p);
int main()
{
    struct point p1={24,50};
    struct point p2={35,55};
     p1 = edit(p1);
     print(p1);
     p2 = edit(p2);
     print(p2);
}
void print(struct point p)
{
    printf("%d %d\n",p.a,p.b);
}

struct point edit(struct point p)
{
    (p.a)++;
    p.b = p.b + 5;
    return p;
}
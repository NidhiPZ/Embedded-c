#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

struct point *func(int a, int b)
{
    struct point *ptr;
    ptr=(struct point*)malloc(sizeof(struct point));
    ptr->x = a;
    ptr->y = b+5;
    return ptr;

}

int main()
{
    struct point *p1;
    struct point *p2;

    p1=func(2,5);
    p2=func(5,7);

printf("p1= %d %d\n",p1->x,p1->y);
printf("p2= %d %d\n",p2->x,p2->y);

free(p1);
free(p2);

}
#include<stdio.h>
//This defines a structure mystruct containing an integer a and a pointer to another mystruct (b).
struct mystruct 
{
    int a;
    struct mystruct *b;
};

int main()
{
    //x, y, z initialized with int val 10, 20, 30, and their pointers b are initially set to NULL.
    struct mystruct x={10,NULL} , y={20,NULL}, z={30,NULL};

    //p1, p2, p3 are pointers to the structures x, y, and z
    struct mystruct *p1, *p2, *p3;  
    p1 = &x;
    p2 = &y;
    p3 = &z;

    x.b = p2;  //x.b is set to point to y (p2).
    y.b = p3;  //y.b is set to point to z (p3).


    printf("Address of x= %p, a= %d, Address of next = %p\n",p1,x.a, x.b);
    printf("Address of y= %p, a= %d, Address of next = %p\n",p2,y.a, y.b);
    printf("Address of z= %p, a= %d, Address of next = %p\n",p3,z.a, z.b);

}

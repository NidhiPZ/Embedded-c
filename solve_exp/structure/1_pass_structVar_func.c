//pass the structure variable in function
#include<stdio.h>
struct rect
{
    int len,wid;
    int area;

};
int area(struct rect r);
int main()
{
    struct rect r;
    printf(" enter the len:");
    scanf("%d",&r.len);
    printf("enter the wid:");
    scanf("%d",&r.wid);

    printf("area of rect is: %d",area(r));
}
int area(struct rect r)
{
    r.area = r.len * r.wid;
    return r.area;
}
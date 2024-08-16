//pass the pointer of structure in function
#include<stdio.h>
struct rect
{
    int len,wid;
    int area;
};

int area(struct rect *ptr);

int main()
{
    struct rect r;
    printf("enter len: ");
    scanf("%d",&r.len);
    printf("enter the wid: ");
    scanf("%d",&r.wid);

    printf("the area of rect is=%d",area(&r));

}
int area(struct rect *ptr)
{
    ptr->area= ptr->len * ptr->wid;
    return ptr->area;
}

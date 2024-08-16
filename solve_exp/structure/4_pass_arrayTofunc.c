#include<stdio.h>
struct point 
{
    int a;
    int b;
};
void print(struct point arr[])
{
    for(int i=0; i<3; i++)
    {
        printf("%d %d\n",arr[i].a,arr[i].b);
    }
}
int main()
{
    struct point arr[3] = {{1,2}, {3,4}, {5,6}};
    print(arr);
}
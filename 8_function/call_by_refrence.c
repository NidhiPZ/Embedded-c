//call by refrence
#include<stdio.h>
void swap(int *, int *);   //function declaration

void swap(int *a, int *b)     //function defination
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("Enter the two number: ");
    scanf("%d %d",&x, &y);
    printf("bedore swaping x=%d And y=%d \n",x, y);

    swap(&x, &y);  //calling the function

    printf("after the swaping x=%d And y=%d ",x, y);
}
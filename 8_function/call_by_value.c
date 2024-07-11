//call by value 
#include<stdio.h>
void swap(int, int);    //function declaration

int main()    //main function
{
    int a, b;
    printf("Enter the two number: ");
    scanf("%d %d",&a, &b);
    printf("bedore swaping a=%d And b=%d \n",a, b);

    swap(a, b);        // function call
    
    printf("after the swaping a=%d And b=%d ",a, b);
}

void swap(int x, int y)   //function defination
{
    int temp = x;
    x = y;
    y = temp;
}
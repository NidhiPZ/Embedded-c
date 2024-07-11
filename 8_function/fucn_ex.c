#include<stdio.h>
void fun1(int a, int b);
void fun2(int *a, int *b);

void fun1(int a, int b)
{
    int c = a;    // c = 4
    a = b;        //a = 5            //didn't change the value bcz of its pass by value
    b = c;          //b = 4
}

void fun2(int *a, int *b)  //a=5 b=6
{ 
    int c = *a;     //c = 5
    *a = *b;        //a = 6  ->&b
    *b = c;         //b = 5  ->&c
}

int main()
{
    int a=4, b=5, c=6;   
    fun1(a,b);
    fun2(&b,&c);     //b=5->*a, c=6->*b   
    printf("%d",c-a-b);    //a=4, b=6, c=5 -> 6-4-5  
}
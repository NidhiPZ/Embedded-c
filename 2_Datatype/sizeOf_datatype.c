#include<stdio.h>
int main()
{
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;
    

    //display size of datatype in byte using sizeof() operator 
    printf("%d\n", sizeof(myInt));
    printf("%d\n", sizeof(myChar));
    printf("%d\n", sizeof(myFloat));
    printf("%d\n", sizeof(myDouble)); 
}
#include<stdio.h>
int main()
{
    int myInt;
    char myChar;
    float myFloat;
    double myDouble;
    

    //display size of datatype in byte using sizeof() operator 
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble)); 
}
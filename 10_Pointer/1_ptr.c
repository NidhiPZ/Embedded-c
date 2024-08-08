// illustrate Pointers
#include <stdio.h>

int main()
{
    int var = 10;

    // declare pointer variable
    int* ptr;

    // note that data type of ptr and var must be same
    ptr = &var;   //store var address in ptr

    // assign the address of a variable to a pointer
    printf("Value at var = %d \n", var);
    printf("Value at ptr = %p \n", ptr);   // %p is format specifire for pointer it shows ptr address
    printf("Value at *ptr = %d \n", *ptr);  //derefrence the pointer to get value
}



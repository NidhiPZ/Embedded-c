#include <stdio.h>

int main() 
{
    int *ptr;  // Declare a pointer
    *ptr = 5;  // Assign a value to a pointer

    printf("The value of the pointer is: %d\n", *ptr);
    return 0;
}
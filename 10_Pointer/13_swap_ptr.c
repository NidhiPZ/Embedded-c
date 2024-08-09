#include <stdio.h>

// Function to swap the values of two integers
void swap(int *x, int *y) 
{
    int temp;   // Temporary variable to hold one of the values during the swap

    temp = *x;  // Store the value of x in temp
    *x = *y;    // Assign the value of y to x
    *y = temp;  // Assign the value stored in temp (original x) to y
}

int main() 
{
    int a, b;
    printf("enter the 2 number:\n");
    scanf("%d %d",&a,&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b); // Call the swap function and pass the addresses of a and b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

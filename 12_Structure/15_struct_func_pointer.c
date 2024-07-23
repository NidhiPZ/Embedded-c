#include <stdio.h>

// Define the structure containing function pointers
typedef struct
{
    void (*Square)(int, int*); 
    void (*Cube)(int, int*);   
} FuncPtr_t;

void Square(int x, int *result) 
{
    *result = x * x;
}

void Cube(int x, int *result) 
{
    *result = x * x * x;
}

int main() 
{
    FuncPtr_t funcs;
    int num;
    int square;
    int cube;

    // Assign functions to the function pointers in the structure
    funcs.Square = &Square;
    funcs.Cube = &Cube;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate the square and cube using the function pointers
    funcs.Square(num, &square);
    funcs.Cube(num, &cube);
    
    printf("Number: %d\n", num);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);

}

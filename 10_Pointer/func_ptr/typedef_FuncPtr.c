// Typedef for a Function  Pointer 
#include <stdio.h> 

typedef int (*func_ptr)(int, int); 

int add(int a, int b) 
{ 
    return a + b; 
} 

// Function to the subtract two integers 
int subtracts(int a, int b) 
{ 
    return a - b; 
} 

int main() 
{ 
	// Declare function pointers using typedef 
	func_ptr operationAdd = add; 
	func_ptr operationSub = subtracts; 
	printf("Addition result: %d\n", operationAdd(20, 9)); 
	printf("Subtraction result: %d\n", operationSub(20, 9)); 
	return 0; 
}

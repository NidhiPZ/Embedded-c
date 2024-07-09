#include <stdio.h> 

int add(int a, int b) 
{ 
	int sum = a + b; 
	return sum; // Return the sum as the result of the function 
} 

void printMessage() 
{ 
	printf("Hello!!\n"); 
	return; // Return from the function with no value (void) 
} 

int main() 
{ 
	int result = add(5, 3); 
	printf("Result: %d\n", result); 

	printMessage(); 

	return 0; 
}

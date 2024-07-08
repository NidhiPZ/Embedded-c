// C program to demonstrate working of relational operators 
#include <stdio.h> 

int main() 
{ 
	int a = 10, b = 4; 

	// greater than example 
	if (a > b) 
		printf("%d is greater than %d\n",a, b); 
	else
		printf("%d is less than or equal to %d\n",a, b); 

	// greater than equal to 
	if (a >= b) 
		printf("%d is greater than or equal to %d\n",a, b); 
	else
		printf("%d is lesser than %d\n",a, b); 

	// less than example 
	if (a < b) 
		printf("%d is less than %d\n",a, b); 
	else
		printf("%d is greater than or equal to %d\n",a, b); 

	// lesser than equal to 
	if (a <= b) 
		printf("%d is lesser than or equal to %d\n",a, b); 
	else
		printf("%d is greater than %d\n",a, b); 

	// equal to 
	if (a == b) 
		printf("%d is equal to %d\n",a, b); 
	else
		printf("%d and %d are not equal\n",a, b); 

	// not equal to 
	if (a != b) 
		printf("%d is not equal to %d\n",a, b); 
	else
		printf("%d is equal %d\n",a, b); 

	return 0; 
}

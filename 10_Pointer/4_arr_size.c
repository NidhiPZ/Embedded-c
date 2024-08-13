//  sizes of pointer of array
#include<stdio.h>

int main()
{
	int arr[] = { 3, 5, 6, 7, 9 };
	int *p = arr;   // pointer to integer, and initialize it to point to the first element of the array
	int (*ptr)[5] = &arr;   // pointer to array of 5 integers, and initialize it to point to the entire array
	// Print the memory address pointed to by 'p' and 'ptr'
	printf("p = %p, ptr = %p\n", p, ptr);

	// Print the value pointed to by 'p' (which is the first element of the array) and the address of the array that 'ptr' points to
	printf("*p = %d, *ptr = %p\n", *p, *ptr);

	// Print 'p' (size of the pointer itself) and the size of the value it points to (an integer)
	printf("sizeof(p) = %d, sizeof(*p) = %d\n",sizeof(p), sizeof(*p));

	// Print 'ptr' (size of the pointer to the array) and the size of the array it points to
	printf("sizeof(ptr) = %d, sizeof(*ptr) = %d\n", sizeof(ptr), sizeof(*ptr));
	return 0;
}

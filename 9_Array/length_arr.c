//calculate size of an array using sizeof() operator
#include <stdio.h>

int main()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                  2, 2, 5, 3, 12, 51, 2, 5, 15, 31, 15, 181, 43, 12, 2,14,
                   32, 12, 8, 55, 48, 1, 4, 2, 25, 24, 15, 1, 4, 14 };

	// caculate size of Arr
    int size = sizeof(arr);
	int length = sizeof(arr) / sizeof(arr[0]);

    printf("The size of the array is: %d\n", size);
	printf("The length of the array is: %d\n", length);

	return 0;
}

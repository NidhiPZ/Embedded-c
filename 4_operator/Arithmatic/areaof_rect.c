//area and perimeter of the rectangle
#include <stdio.h>

int main()
{
	// declaring dimensions of the rectangle
	int length, width;

    printf("enter the length in cm: ");
    scanf("%d", &length);
    printf("enter the width in cm: ");
    scanf("%d", &width);


	// declaring variables to store the results
	int area, perimeter;

	// calculating area
	area = length * width ;

	// calculating perimeter
	perimeter = 2 * (length + width );

	// printing results
	printf("Area = %d cm\nPerimeter = %d cm", area, perimeter);

	return 0;
}

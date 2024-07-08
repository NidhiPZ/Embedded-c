//check the number is even or odd
#include <stdio.h>

int main()
{
	int num;
    printf("enter the number:");
    scanf("%d",&num);

	// condition to check for even number
	if (num % 2 == 0) 
    {
		printf("%d is Even", num);
		return 0;
	}
	// condition to check for odd number
	else 
    {
		printf("%d is Odd", num);
		return 1;		
	}
	return 0;
}

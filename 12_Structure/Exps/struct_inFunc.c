// pass structure as argument to the functions 
#include <stdio.h>

struct car 
{
	char name[30];
	int number;
};

void print_car_info(struct car c)
{
	printf("Name : %s", c.name);
	printf("\nNumber: %d\n", c.number);
}

int main()
{
	struct car c1 = { "Tata", 1021 };
	print_car_info(c1);
    struct car c2 = { "Swift", 4587 };
	print_car_info(c2);
    struct car c3 = { "skoda", 4455 };
	print_car_info(c3);
	return 0;
}

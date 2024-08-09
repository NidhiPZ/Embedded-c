#include <stdio.h>

struct planets
{
	char *x;
	char *y;
	char *z;
};

int main()
{
	struct planets sample = {"earth", "mars", "Jupiter"};
	printf("%s %s %s\n", sample.x, sample.y, sample.z);

	void fun(struct planets*);
	fun(&sample);
	printf("%s %s %s\n", sample.x, sample.y, sample.z);
}

void fun(struct planets* sample)
{
	sample->x = "mercury";
	sample->y = "venus";
	sample->z = "saturn";
	return;
}
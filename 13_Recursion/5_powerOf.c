//power of any number using recursion
#include <stdio.h>

//function for calculating power
 int getPower(int base, int power)
{
    int result = 1;
    if (power == 0)
        return result;
    result = base * (getPower(base, power - 1)); //call function again
}
int main()
{
    int b, p;
    long int result;

    printf("Enter value of base: ");
    scanf("%d", &b);

    printf("Enter value of power: ");
    scanf("%d", &p);

    result = getPower(b, p);

    printf("%d to the power of %d is: %ld\n", b, p, result);

    return 0;
}

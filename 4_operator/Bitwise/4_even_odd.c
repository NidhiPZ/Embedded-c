#include <stdio.h>

int main() 
{
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the LSB (bit 0) is 1 (odd) or 0 (even)
    if (num & 1 == 1) 
    {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }

    return 0;
}

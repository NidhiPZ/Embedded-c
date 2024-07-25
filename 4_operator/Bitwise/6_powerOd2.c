#include <stdio.h>

int main() 
{
    int num,res;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    res = num & (num - 1);

    // Check if the number is a power of 2
    if  (res == 0) 
        printf("%d is a power of 2.\n", num);
    else
        printf("%d is not a power of 2.\n", num);

    return 0;
}

#include <stdio.h>

int reverseNumber(int num, int reversed) 
{
    // Base case: When num becomes 0, return the accumulated reversed number
    if (num == 0)
    {
        return reversed;
    }
    // get the last digit
    int lastDigit = num % 10;
    // Update reversed number and call the function with the reduced num
    return reverseNumber(num / 10, reversed * 10 + lastDigit);
}

int main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Get the reversed number
    int reversedNumber = reverseNumber(number, 0);

    printf("Reversed number is: %d\n", reversedNumber);

    return 0;
}

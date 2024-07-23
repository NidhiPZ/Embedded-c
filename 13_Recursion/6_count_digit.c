#include <stdio.h>

// Recursive function to count digits
int countDigits(int num) 
{
    if (num == 0) 
    {
        return 0; // Base case: No more digits
    }
    return 1 + countDigits(num / 10); // Count the current digit and continue with the next
}

int main()
 {
    int number;
    printf("Enter a positive integer number: ");
    scanf("%d", &number);

    int count = countDigits(number);
    printf("Total digits in number %d is: %d\n", number, count);
    

    return 0;
}

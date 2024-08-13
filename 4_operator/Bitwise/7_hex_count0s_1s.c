#include <stdio.h>

int main() 
{
    int hex;
    int count_0 = 0, count_1 = 0;
    int size = sizeof(hex) * 2;  // Total number of bits (e.g., 32 bits for an unsigned int)

    // Ask user to enter a hexadecimal value
    printf("Enter a hexadecimal value: ");
    scanf("%x", &hex);  // %x is used to read a hex value

    printf("Binary form: ");

    // Loop through each bit from the most significant to the least significant
    for (int i = size - 1; i >= 0; i--)
     {
        // Use bitwise AND and right shift to get the ith bit
        int bit = (hex >> i) & 1;
        
        // Print the bit
        printf("%d", bit);

        // Count the 1's and 0's
        if (bit)
            count_1++;
        else
            count_0++;
    }

    printf("\nNumber of 1's: %d\n", count_1);
    printf("Number of 0's: %d\n", count_0);

    return 0;
}

#include <stdio.h>

int main()
 {
    int num;
    int ones = 0, zeros = 0;
    int size = sizeof(int) * 2;  //assume 8 bit

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Iterate through each bit position
    for (int i = 0; i < size; i++) 
    {
        // Check if the ith bit is set (1)
        if (num & (1 << i))  
            ones++;
        else
            zeros++;  
    }

    printf("number of 1's in %d: %d\n", num, ones);
    printf("number of 0's in %d: %d\n", num, zeros);

}

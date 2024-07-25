#include <stdio.h>
#include <stdbool.h>

// Declare a volatile variable
volatile int flag = false;

int main() {
    // In a real scenario, this could be set by hardware or an external event.
    // For demonstration, we'll directly change its value here.

    printf("Initial flag value: %d\n", flag);
    printf("Flag is false!\n");

    // Simulate an external change
    flag = true;

    // Print state after change
    printf("Flag value after change: %d\n", flag);

    // Simulate a loop that would wait for the flag to be true
    while (!flag) {
        // In a real scenario, this loop would be waiting for an external event
        // The volatile keyword ensures the loop always reads the flag's value from memory
        printf("waiting for an external event...");
    }

    // Once the flag is true, this message will be printed
    printf("Flag is now true!\n");

    return 0;
}

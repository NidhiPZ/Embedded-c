//using function pointer make simple calculator
#include <stdio.h>

// Function prototypes for operations
int add();
int subtract();
int multiply();
int divide();

int add() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int subtract() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a - b;
}

int multiply()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

int divide()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) 
        return a / b;
     else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main() 
{
    int result, choice;
    int (*ptr)();  // Function pointer declaration

    printf("Simple Calculator:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Assign the appropriate function to the pointer based on the user's choice
    switch (choice) 
    {
        case 1:
            ptr = &add;
            break;
        case 2:
            ptr = &subtract;
            break;
        case 3:
            ptr = &multiply;
            break;
        case 4:
            ptr = &divide;
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    result = (*ptr)();  // Call the selected function using the function pointer
    printf("The result is %d\n", result);

    return 0;
}

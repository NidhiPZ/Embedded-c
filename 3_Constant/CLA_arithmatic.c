#include <stdio.h>
#include <stdlib.h> // For atoi function

int main(int argc, char *argv[]) 
{
    if (argc != 4) 
    {
        printf("Error: 3 opeand are mendotory");
        return 1;
    }

    char operator = argv[2][0];   // First character of the operator string
    int operand1 = atoi(argv[1]); // Convert operand1 string to integer
    int operand2 = atoi(argv[3]); // Convert operand2 string to integer

    int result;

    // Perform arithmetic operation based on the operator
    switch (operator)
     {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("%d %c %d = %d\n", operand1, operator, operand2, result);

    return 0;
}

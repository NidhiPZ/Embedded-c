#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char binary[65]; // To store the binary number as a string
    int decimal = 0;
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int length = strlen(binary);
    
    // Convert binary to decimal
    for(int i = 0; i < length; i++)
     {
        if(binary[length - 1 - i] == '1') 
        {
            decimal += pow(2, i);
        }
    }
    
    printf("Decimal equivalent: %d\n", decimal);
    
    return 0;
}

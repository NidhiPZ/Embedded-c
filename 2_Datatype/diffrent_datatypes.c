#include<stdio.h>
int main()
{
    // Create variables
    int myNum = 5;             // Integer number
    float myFloatNum = 5.99;   // Floating point number
    double myDouble = 5.72857923568;
    char myLetter = 'N';       // Character

    // Print variables
    printf("%d\n", myNum);       //%d is int format specifier
    printf("%f\n", myFloatNum);  //%f is float format specifier
    printf("%c\n", myLetter);    //%c is int format specifier
    
    /*%lf is int format specifier
    and .8lf is how many digit we need after point*/
    printf("%.8lf\n", myDouble);    
}
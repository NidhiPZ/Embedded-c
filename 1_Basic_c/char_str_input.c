#include <stdio.h>

int main(){

   char ch;
   char string[20];
   
   printf("Enter a single character: ");
   scanf(" %c", &ch);    //%c format specifier reads a single char from the user
   printf("Enter a single string: ");
   scanf(" %s", &string);    // %s format specifier reads a series of char into a char array
   
   printf("You entered character : %c\n", ch);
   printf("You entered string : %s", string);
   
   return 0;
}

/*C uses the whitespace as the delimiter character. Hence, if you try to input a string that contains a blank space, only the characters before the space are stored as the value. 
The gets() function overcomes this limitation.*/
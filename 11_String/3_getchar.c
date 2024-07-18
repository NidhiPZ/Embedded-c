//reads characters one by one using getchar()
#include <stdio.h>
int input(char str[], int n)
{
    int ch, i = 0;
    // Read characters until newline is encountered or the maximum length `n` is reached
    while ((ch = getchar()) != '\n' && i < n)
        str[i++] = ch;   // Store the character in `str` and increment i
    str[i] = '\0'; // Place the null terminator after the loop ends
    return i;
}
int main() 
{
   char str[100];
   int n = input(str, 15);
   printf("%d %s ", n , str);

}
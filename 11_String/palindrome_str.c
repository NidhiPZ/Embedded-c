#include <stdio.h>
#include <string.h>

int main() 
{
    char str[10];
    printf("enter the string1: ");
    gets(str);
    int i, len, flag = 0;
    len = strlen(str);

    for (i = 0; i < len/2; i++) 
    {
        // Checking if string is palindrome or not
        if (str[i] != str[len - i - 1]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);

}
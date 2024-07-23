#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char sub[20];
    int len1, len2;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring: ");
    gets(sub);

    len1 = strlen(str);
    len2 = strlen(sub);

    int i, j;
    // Loop through the main string to find the substring
    for (i = 0; i <= len1 - len2; i++) 
    {
        for (j = 0; j < len2; j++)
        {
            if (str[i + j] != sub[j])
            {
                break;  // If characters do not match, break out of the inner loop
            }
        }
        if (j == len2) // If all characters matched
        {
            printf("Substring found at position %d: %s\n", i, str + i);
            break; 
        }
    }

    if (j != len2) // If no match was found
    {
        printf("Substring not found\n");
    }

    return 0;
}

   
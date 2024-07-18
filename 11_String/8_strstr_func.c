//strstr returns pointer to the 1st occurance of long string
#include <stdio.h>
#include <string.h>

int main() 
{
   char str1[100];
   char str2[100];
    printf("enter the long string: ");
    gets(str1);
    printf("select substring: ");
    gets(str2);
   
   char *substr = strstr(str1, str2);
   printf("Substring is: %s", substr);
   return 0;
}
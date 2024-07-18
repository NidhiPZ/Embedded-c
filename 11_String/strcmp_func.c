#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[20];

    printf("enter the string: ");
    gets(str1);
    printf("enter the string: ");
    gets(str2); 

    
    if (strcmp(str1,str2) < 0)
        printf(" str1 < str2");
    else if (strcmp(str1,str2) > 0)
        printf("str1 > str2");
    else
        printf("strings are same");
}
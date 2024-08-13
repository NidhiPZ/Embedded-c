#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[20];

    printf("enter the string1: ");
    gets(str1);
    printf("enter the string2: ");
    gets(str2); 
    int i=0;
    while (str1[i] == str2[i] && str1[i] != '\0') 
    {
        i++;
    }
    if (str1[i] > str2[i])
    {
        printf("str1 > str2\n");
    } 
    else if (str1[i] < str2[i]) 
    {
        printf("str1 < str2.\n");
    } 
    else 
    {
        printf("Both strings are the same.\n");
    }
} 
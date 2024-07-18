#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[20];
    int i, len1, len2;

    printf("enter the string1: ");
    gets(str1);
    printf("enter the string2: ");
    gets(str2); 

    len1= strlen(str1);
    len2= strlen(str2);

    for (i=0; i<=len2; i++)
    {
        str1[len1 + i ] = str2[i];
    }

    printf("%s", str1);
}
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

    strcat(str1, str2);
    printf("%s", str1);

}
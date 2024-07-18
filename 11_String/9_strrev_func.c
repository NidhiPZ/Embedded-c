#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[20];
    printf("enter the string: ");
    gets(str);
    
    strrev(str);

    printf("%s", str);

}
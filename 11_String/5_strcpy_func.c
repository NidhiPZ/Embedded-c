#include<stdio.h>
#include<string.h>
int main()
{
    //char src[10] = "Earth";

    char src[20];
    char dest[20];

    printf("enter the string: ");
    gets(src);
    strcpy(dest, src);
    printf("%s", dest);

}
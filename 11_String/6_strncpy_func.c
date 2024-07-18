#include<stdio.h>
#include<string.h>
int main()
{
    
    char src[20];
    char dest[10];

    printf("enter the string: ");
    gets(src);
    strncpy(dest, src, sizeof(dest));
    dest[sizeof(dest)-1] ='\0';
    printf("%s", dest);

}
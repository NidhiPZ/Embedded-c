#include<stdio.h>
#include<string.h>
int main()
{
    char src[20] ;
    char dest[20];
     printf("enter the string: ");
     gets(src);

    for(int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    printf("string is : %s", dest);
    
}
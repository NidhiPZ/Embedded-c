//gets() accept a string with whitespace
#include<stdio.h>
#include<string.h> 
int main()
{
    char name[20];
    printf("Enter a string: ");
    gets(name);
    printf("string is : %s\n",name);
    int length2 = 0; 
    length2 = strlen(name);
    printf("length of str is: %d",length2);
}
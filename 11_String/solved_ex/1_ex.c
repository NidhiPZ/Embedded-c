#include<stdio.h>
#include<string.h>
int main()
{
    char p[20];
    char *s = "string";
    int len = strlen(s);
    int i;
    for(i=0; i<len; i++)
    {
        p[i]=s[len - i];
    }
    printf("%s",p);
}
/*
 s= s t r i n g \0
    0 1 2 3 4 5 6
    i=0 -> p[0] = s[6-0] 
            p[0] = s[6] =\0
note: the printf will print everything before the null char and will not see anything after null char
    there for here printf get \0 char at first  thats why nothing will be printed on screen

*/
// using gets() fun all the characters till you press Enter are stored in the variable.
#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[20];
printf("enter the string:");
gets(str);

printf("string is :%s",str);
}
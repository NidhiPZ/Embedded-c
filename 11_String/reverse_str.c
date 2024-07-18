#include<stdio.h>
#include<string.h>
 int main()
 {
    char str[100], temp;
    int len;
    printf("enter the string: ");
    scanf("%s", str);

    len=strlen(str);

    for(int i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;

    }
    printf("reverse string is : %s", str);
 }
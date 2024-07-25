#include <stdio.h>

int main() 
{
    int num, i;
    int bin[50];
    printf("enter the num: ");
    scanf("%d",&num);
    
    for (i=0; num>0; i++)
    {
        bin[i] = num%2;
        num=num/2;
    }

    printf(" binary is: ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",bin[i]);
    }

    return 0;
}

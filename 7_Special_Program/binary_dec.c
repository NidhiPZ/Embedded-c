#include<stdio.h>
int main()
{
    int bin, dec=0, base=1, num, rem;
    printf("Enter the binary number:");
    scanf("%d",&bin);

    num=bin;
    while (bin != 0)
    {
        rem = bin % 10;
        dec=dec+rem*base;
        bin=bin/10;
        base=base*2;
    }
    printf("decimal number of binary eqvivelnt %d is : %d",num,dec);
    
}
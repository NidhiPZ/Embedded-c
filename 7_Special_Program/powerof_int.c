#include<stdio.h>
int main()
{
    int base, exponent, expo, power=1;
    double power1=1.0;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exponent:");
    scanf("%d",&exponent);

    expo=exponent;
    if(exponent > 0)
    {
        while(exponent != 0)
        {
            power = power*base;
            exponent--;
        }
        printf("%d to the power of %d is %d",base,expo,power);
    }
    else
    {
         while(exponent != 0)
        {
            power1 = power1*(1.0/base);
            exponent++;
        }
        printf("%d to the power of %d is %lf",base,expo,power1);
    }

}
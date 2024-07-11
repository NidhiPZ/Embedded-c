#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter the 3 number:");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1 < num2 && num1 < num3)
    printf("min = %d\n",num1);
    else if(num2 < num1 && num2 < num3)
    printf("min = %d\n",num2);
    else
    printf("min = %d\n",num3);

    if(num1 > num2 && num1 > num3)
    printf("max = %d\n",num1);
    else if(num2 > num1 && num2 > num3)
    printf("max = %d\n",num2);
    else 
    printf("max = %d\n",num3);
        
    
}
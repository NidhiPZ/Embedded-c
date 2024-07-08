#include<stdio.h>
int main()
{
    int num1;
    int num2;

    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);
     
     int add = num1 + num2;
     int sub = num1 - num2;
     int mul = num1 * num2;
     float div = (float) num1 / num2;

    printf("addition of  num= %d\n",add);
    printf("substraction of num= %d\n",sub);
    printf("multiplication of num= %d\n",mul);
    printf("division of num= %.2f",div);
}
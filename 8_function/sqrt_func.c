//predefined C library function
#include<stdio.h>
#include<math.h>   //for sqrt() / pow() func reqired to add headerfile math.h 

int main()
{
    float num, squareRoot;
    printf("enter the number:");
    scanf("%f",&num);

    squareRoot=sqrt(num);
    printf("Squareroot of %.2f = %.2f", num, squareRoot);   //library function

}
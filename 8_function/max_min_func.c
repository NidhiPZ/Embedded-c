//user define fumction make own function
#include<stdio.h>
#include<stdlib.h>

int max(int , int); // fucntion declaration
int min(int , int);
 
int max(int num1, int num2)  //func defination
{
    int result;
    if (num1 > num2)
    result = num1;
    else
    result = num2;
    return result;
}
int min(int num1, int num2)  //func defination
{
    int result;
    if (num1 < num2)
    result = num1;
    else
    result = num2;
    return result;
}

int main()
{
    int a ,b;
    printf("enter two num:");
    scanf("%d %d",&a, &b);
    if(a == b)
    {
        printf("both are equal");
        exit (0);
    }

    int max_result = max(a, b);  //func call
    printf ("max number is: %d\n", max_result);

    int min_result = min(a, b);
    printf ("min number is: %d", min_result);
   
}
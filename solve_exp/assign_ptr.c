#include<stdio.h>
int main()
{
    int  a[]= {5,16,7,89,45,32,23,10};   // aasume address start with 1000
    int *p = &a[1];  //1004
    int *q = &a[5];  //1020
   
    printf("%d\n", *(p+3));  //1004 + 3*4 -> 1016 -> 45
    printf("%d\n", *(q-3));  //1020 - 3*4 -> 1008 -> 7
    printf("%d\n", q-p);    //1020 - 1004 /4 -> 16/4 -> 4
    printf("%d\n", p<q);    //1008 < 1020 -> T=>1
    printf("%d\n", *p<*q);  //16 < 32 -> t=>1 


}
#include<stdio.h>
int main()
{
    int Num = 15;
    int myNum = 23;
   
    Num = myNum;   // Assign the value of myOtherNum (23) to myNum
    printf("%d", Num);  // myNum is now 23, instead of 15
}
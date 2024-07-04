#include<stdio.h>
int main()
{
    //without const its change their value
    int var1=50;
    var1=55;
    printf("value of var %d\n",var1);
     
     //With const the value remain same, if we change value it flash error
     const int var2 = 45;
    // var2 = 38;
     printf("value of var %d",var2);

     return 0;
}
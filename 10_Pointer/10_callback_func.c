//callback function
#include <stdio.h>
void CallbackFunction()
{
    printf("CallbackFunction called\r\n");
}
//MyFunction func takes a single parameter: a pointer to a function that takes no arguments and returns void 
void MyFunction(void (*p)())  
{
    (*p)();   //the function pointer p is called 
}

int main( )
{
    MyFunction(CallbackFunction); // MyFunction is then called with CallbackFunction as the argument
    return 0;
} 
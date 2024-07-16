//function pointer 
#include <stdio.h>

void MyCallback(void)
{
   printf("Calling to MyCallback\r\n");
}

int main(void)
{
   //Assining the address of the MyCallback function to the pointer
   void (*fun_ptr)(void)  = MyCallback;  
   
   (*fun_ptr)();  // call the function using function pointer
   return 0;
}
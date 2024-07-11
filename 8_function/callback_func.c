#include<stdio.h>

void A();
void B();

//Defination of A and B function 
void A()
{
    printf("Function 1\n");
}
 void B()
 {
    printf("Function 2");
 }

 void c(void (*ptr)())  //function pointer
 {
    (*ptr)();  // calling the c function
 }

 int main()
 {
  
    //calling finction C and passing address of the function A and B as argument
    c(&A);
    c(&B);
    
 }
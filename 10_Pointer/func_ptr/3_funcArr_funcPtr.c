//Function array using function ptr
#include <stdio.h>

void add(int a, int b)
{
     printf ("Addition : (a+b): %d\n", (a+b));
}

void sub(int a, int b)
{
    printf("Subtrcation : (a-b): %d\n", (a-b));
}

void mul (int a, int b)
{
    printf("Multiplication: (a*b): %d\n", (a*b));
}


int main(void)
{
    int opt =0;  // Variable to store the operation choice
    int x, y;
    
    //Array of function pointers, each pointing to an arithmetic function
    void (*Operation[])(int ,int)= {add, sub, mul};  //each ele points to one of the arithmetic func.
    
    printf("Send operation: "); 
    scanf("%d", &opt);   //0=add, 1=sub, 2=mul
    
    printf("Send two initger : ");
    scanf("%d %d", &x,&y);
 
    // Check if the chosen operation is valid 
    if(opt<=2) 
    {
      (*Operation[opt])(x,y);  // Call the selected function with x and y
    }
}
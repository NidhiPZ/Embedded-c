#include <stdio.h>

int fibonacci(int i)
{
    if(i == 0)
    {
      return 0;
    }
   
   if(i == 1)
   {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int main()
{ 
   int n;
   printf("enter the number of Fibonacci numbers to print: ");
   scanf("%d",&n);
   printf("Fibonacci sequence up to %d terms is:\n", n);
   for (int i = 0; i < n; i++)
   {     
      printf("%d ", fibonacci(i));
   } 
   return 0;
}
    

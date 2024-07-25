// demonstrate use of variable number of arguments.
#include <stdio.h>
#include <stdarg.h>

// this function returns minimum of integer/ numbers passed. 
double average(int num,...) 
{
    //va_list is a type to hold information about variable arguments
   va_list list;
   double sum = 0.0;
   int i;

   // va_start must be called before accessing variable argument list
   va_start(list, num);

   // access all the arguments assigned to list 
   for (i = 0; i < num; i++) 
   {
      sum += va_arg(list, int);
   }

  /*clean memory reserved for list
   va_end should be executed before the function return */
   va_end(list);

   return sum/num;
}

int main() {

   printf("Average of 2, 3, 4, 5 = %f\n", average(4,  2,3,4,5));
   printf("Average of 5, 10, 15 = %f\n", average(3,  5,10,15));
}
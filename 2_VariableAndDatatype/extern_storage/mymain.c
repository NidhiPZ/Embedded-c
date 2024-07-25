#include "myheader.h"
int main()
 {

   int p = 10, q = 20;
   float x = 5.25;

   sayHello();
   printf("sum of %d and %d is: %d\n", p, q, add(p,q));
   printf("Radius: %f Area: %f", x, area(x));

   return 0;
}
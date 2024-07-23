#include <stdio.h>

enum months{Jan=1, Feb, Mar, Apr, May, Jun, Jul, 
   Aug, Sep, Oct, Nov, Dec};

int main()
{

   for (int i = Jan; i <= Dec; i++)      
      printf("Month No: %d\n", i);

   return 0;
}
#include <stdio.h>
#include <string.h>

union Data
{
   int i;
   float f;
   char str[20];
};

int main()
{
   union Data d;        
   
   d.i = 10;
   d.f = 220.5;
   strcpy(d.str, "C Programming");
   
   printf("data.i: %d \n", d.i);
   printf("data.f: %f \n", d.f);
   printf("data.str: %s \n", d.str); 
   return 0;
}
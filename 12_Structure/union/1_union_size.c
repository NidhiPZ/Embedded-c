#include <stdio.h>

// Define a union
union Data
 {
   int a;
   float b;
   char c[20];
};

int main()
 {
   union Data data;

   // Printing the size of the each member of union
   printf("Size of a: %d bytes\n", sizeof(data.a));
   printf("Size of b: %d bytes\n", sizeof(data.b));
   printf("Size of c: %d bytes\n", sizeof(data.c));

   // Printing the size of the union
   printf("Size of union: %d bytes\n", sizeof(data));

   return 0;
}
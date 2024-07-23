#include <stdio.h>
 
enum myenum {a, b = 5, c, d, e = 10, f};

int main()
{

   printf("a: %d\n", a);
   printf("b: %d\n", b);
   printf("c: %d\n", c);
   printf("d: %d\n", d);
   printf("e: %d\n", e);
   printf("f: %d\n", f);

   return 0;
}

/*All unassigned names get a value that is "value of previous name plus one".*/
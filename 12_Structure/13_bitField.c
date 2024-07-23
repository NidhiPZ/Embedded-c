#include <stdio.h>

struct 
{
   unsigned int age : 3;
} Age;

int main() 
{

   Age.age = 4;
   printf("Sizeof(Age): %d\n", sizeof(Age));
   printf("Age.age: %d\n", Age.age);

   Age.age = 7;
   printf("Age.age : %d\n", Age.age);

   Age.age = 8;
   printf("Age.age : %d\n", Age.age);

}
/*above structure definition instructs the C compiler that variable "Age" is going to use only 3 bits to store the value.
 If you try to use more than 3 bits,then its give warning:"unsigned conversion from 'int' to 'unsigned char:3' 
 changes value from '8' to '0' [-Woverflow]",
	 */
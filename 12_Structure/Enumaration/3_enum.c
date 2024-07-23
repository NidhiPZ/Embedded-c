#include <stdio.h>

// Enum declaration
enum colors { VIOLET, INDIGO, BLUE, GREEN, YELLOW, ORANGE, RED };

int main() 
{
   // Enum variable declaration
   enum colors clr = YELLOW;
   // switch statement using enum
   switch (clr) 
   {
      case BLUE:
         printf("Blue color");
         break;

      case GREEN:
         printf("Green color");
         break;

      case RED:
         printf("Red color");
         break;

      default:
         printf("Color other than RGB");
   }

   return 0;
}
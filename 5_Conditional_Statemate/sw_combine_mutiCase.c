//Switch Statement by Combining Multiple Cases
//Checks value of the given char variable stores a lowercase alphabet, an uppercase alphabet, a digit, or any other key.
#include <stdio.h>

int main (){

   char ch;
   printf("enter the character:");
   scanf("%c",&ch);

   switch (ch){
      case 'a' ... 'z':
         printf("%c is a lowercase alphabet\n", ch);
         break;
      
      case 'A' ... 'Z':
         printf("%c is an uppercase alphabet\n", ch);
         break;
      
      case 48 ... 57:
         printf("%c is a digit\n", ch);
         break;
      
      default:
         printf("%c is a non-alphanumeric character\n", ch);
   }
   return 0;
}

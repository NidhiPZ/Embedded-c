#include <stdio.h>

struct employee 
{
   int age;
   float percent;
   char name[10];
};

int main() 
{

   FILE *fp;
   struct employee e[] = { {25, 65.5, "Sanam puri"}, 
                           {21, 75.5, "Rohan"},
                           {28, 68.0, "Neha"}   };

   char *string;

   fp = fopen("9_file.bin", "wb");
   for (int i = 0; i < 3; i++) 
   {
      fwrite(&e[i], sizeof (struct employee), 1, fp);
   }

   fclose(fp);
   
   return 0;
}
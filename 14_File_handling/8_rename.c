//rename the file name using rename()  function
#include <stdio.h>

int main()
 {
   if (rename("jkl.txt", "abc.txt") == 0)   //rename("oldfile.txt", "newfile.txt")
   {
       printf("file renamed successfully.\n");
   } 
   else 
   {
       printf("Error in renaming file");
   }
}
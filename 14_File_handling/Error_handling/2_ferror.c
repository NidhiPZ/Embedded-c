#include <stdio.h>

int main()
{

   FILE *fp;
   fp = fopen("test.txt","w");

   char ch = fgetc(fp);  // Trying to read data, from writable file

   if(ferror(fp)) //check error accurred during file
   {
      printf("File is opened in writing mode! You cannot read data from it!\n");
   }

   //clear both eof and error indicator for file stream
   clearerr(fp);   

   if(ferror(fp))    //now ferror() doesn't show error
   {
      printf("Error again in reading from file!");
   }
   fclose(fp);
   
   return(0);
}
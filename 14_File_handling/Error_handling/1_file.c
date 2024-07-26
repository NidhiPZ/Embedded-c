#include <stdio.h>
#include <errno.h>   //add header file for error handling

int main()
{

   FILE* fp;

   // opening a file which does not exist
   fp = fopen("nofile.txt", "r");

   printf("Value of errno: %d\n", errno);  //print error number
   perror("Error message:");   //print msg associated with errno

   return 0;
}
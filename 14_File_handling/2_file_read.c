#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fptr = NULL;
    char str[50];
    char ch;
    fptr= fopen("2_file.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: file does't exist");
        exit(1);
    }

     //fgets(str,10,fptr);  // its giving string upto 9 char 1 is \0
     fgets(str,30,fptr);  // its giving string upto break line
     printf("%s",str);
    

    // //whole string with new line
    // while (!feof(fptr)) //f endof file
    // { 
    //      fgets(str,10,fptr);     
    //      printf("%s",str);
    // }

    // while (!feof(fptr))  
    // {
    //      ch = fgetc(fptr);    //char by char till end of the file
    //      printf("%c",ch);
    // }

    fclose(fptr);
    
}
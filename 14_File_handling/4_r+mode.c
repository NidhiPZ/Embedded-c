#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr=NULL;
    char str[100];

    fptr = fopen("4_file.txt", "r+");

    if (fptr == NULL)
    {
        printf("Error: file doesn't exist");
        exit(1);
    }
    printf("enter the string u want to write:");
    gets(str);
    fputs(str,fptr); 

    rewind(fptr);
    fgets(str,30,fptr);  // its giving string upto break line
    printf("%s",str);

  
    fclose(fptr);
}
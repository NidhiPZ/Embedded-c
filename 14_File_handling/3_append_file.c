#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr=NULL;
    char str[100];

    fptr = fopen("3_file.txt", "a");

    if (fptr == NULL)
    {
        printf("Error: file doesn't exist");
        exit(1);
    }
    printf("enter the string u want to append:");
    gets(str);

    fputs(str,fptr);  //append in continue line

//    //want to append in new line
//    fprintf(fptr,"\n %s", str);

    printf("appdend successfully");
    fclose(fptr);

}
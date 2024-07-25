#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr=NULL;
    char str[100];
    char ch;

    fptr = fopen("6_file.txt", "r+");

    if (fptr == NULL)
    {
        printf("Error: file doesn't exist");
        exit(1);
    }
    fseek(fptr,6,SEEK_SET);
    fgets(str,30,fptr);  // its giving string upto break line
    printf("%s",str);

    rewind(fptr);
    fgets(str,50,fptr);  // its giving string upto break line
    printf("\n%s",str);

    fclose(fptr);
}
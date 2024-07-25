#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fptr=NULL;
    char str[50];
    int a=10;
    char ch='N';
    
    
    fptr = fopen("1_File.txt", "w");
    if (fptr == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string: ");
    gets(str);

    fprintf(fptr,"%d %s %c",a,str,ch);


    // for(int i=0; i!= strlen(str); i++)
    // {
    //     fputc(str[i],fptr);
    // }


     //fputs(str,fptr);

    fclose(fptr);
}
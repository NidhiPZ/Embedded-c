#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[20];

    printf("enter the string1: ");
    gets(str1);
    printf("enter the string2: ");
    gets(str2); 
 
    for( int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
     {
        if (str1[i] < str2[i])        
          { 
             printf("str1 < str2\n");
             return 0;
            }
            else if (str1[i] > str2[i])   
            {  
            printf("str1 > str2\n");
            return 0;
            }
        else
            {
                printf("strings are same");
                return 0;
                }
       
     }
     
} 
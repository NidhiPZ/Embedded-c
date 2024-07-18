//scanf() reads char until it encounters the white_spece(tab, new line etc..)
#include <stdio.h>
#include <string.h>

int main ()
{
   //char str[20] = "Hello World!!";
   //printf("string is : %s\n",str);

    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);  
    //printf("string is : %s\n",str);
    puts(str);
    int length1 = 0;
    length1 = strlen(str);
    printf("length of str is: %d",length1);


}
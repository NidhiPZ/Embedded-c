#include <stdio.h>  
#include <string.h>  
  
int main() 
{  
char str[100] = "welcome to the most beautiful city.";  
char *sub;  
  
sub = strstr(str, "come");  
  
if (sub != NULL) 
{  
    printf("Substring is: %s", sub);  
}
 else 
{  
    printf("Substring not found.");  
}  
  
return 0;  
}  
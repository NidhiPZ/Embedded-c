#include<stdio.h>
int main()
{
    char a = 7;
    a ^= 5;
    printf(" %d",printf("%d",a+=10));  //output will be 12 2
    return 0;
}

/*Note: printf("%d", a += 3);: Prints the value of a += 10, which is 12. The inner printf returns the number of characters printed (which is 2 in this case, since it prints 12).*/
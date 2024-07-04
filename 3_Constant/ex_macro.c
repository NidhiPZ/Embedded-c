//Write multiple line using \ im macro
#include<stdio.h>
#define greater(a, b) if(a > b) \
                       printf("%d is grater than %d",a, b); \
                       else \
                       printf("%d is greater than %d",b, a);


int main()
{
    greater(2, 4);
    return 0;
}

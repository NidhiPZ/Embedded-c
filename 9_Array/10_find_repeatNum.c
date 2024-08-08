#include<stdio.h>
int main()
{
    int seen[10] = {0};
    int num, rem;
    printf("enter the number:");
    scanf("%d",&num);

    while (num > 0)
    {
        rem=num%10;
        if(seen[rem] == 1)
        break;
        else
        seen[rem] = 1;
        num=num/10;
    }

    if (num > 0)
    printf("there are repetation number in given digits");
    else
    printf("there are no repetation number in given digits");

}

/*  num = 1232; rem = 2; seen[2] =1;  num/10 = 123
    num = 123; rem = 3; seen[3] =1;   num/10 = 12
    num = 12; rem = 2; seen[2] =1;   num/10 = 123 // number is repeat 
*/
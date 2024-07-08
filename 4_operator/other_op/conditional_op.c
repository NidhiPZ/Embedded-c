
// int main()
// {
//     char result;
//     int mark;
//     printf("enterr the marks: ");
//     scanf("%d",&mark);

//     if(mark > 33)
//     {
//     result = 'p';
//     printf("result = %c",result);
//     }
//     else
//     {
//     result = 'f';
//     printf("result = %c",result);
//     }
// }

/*...above equivalent code useing conditinal(ternary) oprator works......*/
#include<stdio.h>
int main()
{
    char result;
    int mark;

     printf("enterr the marks: ");
     scanf("%d",&mark);

     result=(mark > 33) ? 'p' : 'f';

     printf("result = %c",result);

}
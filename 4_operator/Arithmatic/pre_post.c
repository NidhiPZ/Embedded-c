//example of how the lexical analyzer(scnner) tockenize the keyword 
#include<stdio.h>
int main()
{
    int a=4, b=3;
    printf("sum= %d\n", a+++b); // a+++b is tokenize as -> (a++ + b)
    int c=4, d=3;
    printf("sum= %d\n", c+ ++d); // c+ ++dis tokenize as -> as (c + ++d)

    //  int e=4, f=3;
    // printf("sum= %d\n", e+++++f);  //a+++++b is tokenize as - a  ++  ++  +  b   =   (a++)++  +  b

    /*Answer for last e&f var question is  ERROR.
    So, as increment operator can take only lvalue so, compiler generates error. */
}
#include <stdio.h>
int main()
{
    int a[][3] = {{1,2,3},{4,5,6}};
    int (*ptr)[3] = a;
    printf("%d %d \n", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);

}

/*
*ptr ->points to first element of 1st  1D array
(*ptr)[1]->*((*ptr) + 1) -> gives ptr to 2nd element of the 1st 1D arr ->2
(*ptr)[2]->*((*ptr) + 2) -> gives ptr to 3rd element of the 1st 1D arr ->3

++ptr -> pointer to 2nd 1D array

(*ptr)[1]->*((*ptr) + 1) -> gives ptr to 2nd element of the 2nd 1D arr ->5
(*ptr)[2]->*((*ptr) + 2) -> gives ptr to 3rd element of the 2nd 1D arr ->6

*/
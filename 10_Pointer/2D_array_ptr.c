#include<stdio.h>
int main()
{
    unsigned int x[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);

}

/*
assume x[0][0] = 2000 address
      1                        2                    3                            4
1      2       3    |   4       5       6   |   7       8        9   |    10        11      12
200   204     208      212     216     220     224     228      232       236      240      244

x ->pointer to the 1st 1D array
x+3-> pointer to the 4th 1D array -> x+3-> 2000 + 3 * 3(col) * 4(byte) ->236
*(x+3) -> pointer to the 1st element of 4th 1D array ->236
*(x+2)+3 -> *(x+2) -> pointer to the 1st ele of the 3rd 1D array -> 224 + 3*4(byte)  -> 236
output is : 236, 236, 236 -> address depends on the machine to machine 
*/
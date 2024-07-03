//Range of Data types using <limits.h> header file
#include<stdio.h>
#include<limits.h>
int main()
{
    /*...signed  and Unsigned int datatype... */
    printf("signed int range:\n");
    int var1 = INT_MIN;  //INT_MIN is macro which are defined in limits.h header file
    int var2 = INT_MAX;
    printf("%d to %d\n",var1,var2);

    printf("unsigned int range:\n");
    unsigned int var3 = 0;  
    unsigned int var4 = UINT_MAX;
    printf("%u to %u\n\n",var3,var4);  // %u is for unsigned int format specifier

    /*...signed  and Unsigned short int datatype... */
    printf("shoret signed int range:\n");
    short int va1 = SHRT_MIN;  //INT_MIN is macro which are defined in limits.h header file
    short int va2 = SHRT_MAX;
    printf("%d to %d\n",va1,va2);

    printf("short unsigned int range:\n");
    short unsigned int va3 = 0;  
    short unsigned int va4 = USHRT_MAX;
    printf("%u to %u\n",va3,va4);  // %u is for unsigned int format specifier


    printf("\nchar range:\n");
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf(" %d to %d \n", SCHAR_MIN, SCHAR_MAX );
   
    printf("\n");
}
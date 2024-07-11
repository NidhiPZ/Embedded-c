#include<stdio.h>
int test(int);
int  main() {
   test(5);
   printf("end");
   return 0;
}

int test(int a){
   if (a<3)
      return 1;
   else
      return 0;
}
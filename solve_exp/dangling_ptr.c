#include <stdio.h>
#include<stdlib.h>

int main(){

   int *x = (int *) malloc(sizeof(int));
   *x = 100;
   printf("x: %d\n", *x);

   free (x);
   printf("x: %d\n", *x);
}
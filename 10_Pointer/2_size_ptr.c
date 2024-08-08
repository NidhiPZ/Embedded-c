#include <stdio.h>
void func(int a, int b){};
int main()
 {
  int x = 10;
  float y = 1.3f;
  char z = 'p';


  // Pointer declaration and initialization
  int * ptr_x = & x;
  float * ptr_y = & y;
  char * ptr_z = & z;
  void (*ptr_func)(int, int) = &func;
  void* ptr_vn = NULL;

  // Printing the size of pointer variables
  printf("Size of integer pointer : %d byte\n", sizeof(ptr_x));
  printf("Size of float pointer : %d byte\n", sizeof(ptr_y));
  printf("Size of char pointer : %d byte\n", sizeof(ptr_z));
  printf("Size of Function Pointer : %d byte\n", sizeof(ptr_func));
  printf("Size of NULL Void Pointer : %d byte\n" , sizeof(ptr_vn));
}
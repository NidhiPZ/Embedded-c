#include <stdio.h>
#include <string.h>

// define the child struct type first
struct dob
{
   int d, m, y;
};
/* parent struct defined after child struct.
use child variable as one of the elements in the parent struct type*/
struct employee
{
   char name[10];
   int salary;
   struct dob d1;
};

int main()
{

   struct employee e1 = {"Sanam", 35000, {12, 8, 1999}};
   printf("Name: %s\n", e1.name);
   printf("Salary: %d\n", e1.salary);
   printf("Date of Birth: %d-%d-%d\n", e1.d1.d, e1.d1.m, e1.d1.y);
   
   return 0;
}
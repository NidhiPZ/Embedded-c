#include <stdio.h>
#include <string.h>

struct employee
{
   char name[10];
   float salary;
   struct dob{
      int d, m, y;
   } d1;
};

int main()
{

   struct employee e1 = {"Kiran", 25000, {12, 5, 1990}};
   printf("Name: %s\n", e1.name);
   printf("Salary: %f\n", e1.salary);
   printf("Date of Birth: %d-%d-%d\n", e1.d1.d, e1.d1.m, e1.d1.y);
   
   return 0;
}
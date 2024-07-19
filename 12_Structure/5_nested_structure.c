#include <stdio.h>
#include <string.h>
//we define an "employee" data type with one of its elements being "dob"
struct employee
{
   char name[10];
   int salary;
//declare dob struct with int types d, m, y inside the employee structure and its variable "d1"
   struct dob
   {
      int d, m, y;
   } d1;
};

int main()
{

   struct employee e1 = {"Sanam", 25000, {12, 8, 1999} };
   printf("Name: %s\n", e1.name);
   printf("Salary: %d\n", e1.salary);
   printf("Date of Birth: %d-%d-%d\n", e1.d1.d, e1.d1.m, e1.d1.y);
   
   return 0;
}
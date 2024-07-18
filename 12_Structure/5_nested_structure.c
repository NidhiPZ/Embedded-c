//nested structure -> print employee date of joining
#include <stdio.h>  
#include <string.h>  
struct Employee  
{     
   int id;  
   char name[20];  
   struct Date  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }doj;  
}e1, e2;  
int main( )  
{  
   //storing employee1 information  
   e1.id=101;  
   strcpy(e1.name, "Sanam puri"); //copying string into char array  
   e1.doj.dd=10;  
   e1.doj.mm=04;  
   e1.doj.yyyy=2024; 

  //printing first employee information  
   printf( "employee id : %d\n", e1.id);  
   printf( "employee name : %s\n", e1.name);  
   printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy); 
   
printf("\n");
   //storing employee1 information  
   e2.id=103;  
   strcpy(e2.name, "kumar sanu");//copying string into char array  
   e2.doj.dd=16;  
   e2.doj.mm=10;  
   e2.doj.yyyy=2023;  
   

    //printing 2nd employee information  
   printf( "employee id : %d\n", e2.id);  
   printf( "employee name : %s\n", e2.name);  
   printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e2.doj.dd,e2.doj.mm,e2.doj.yyyy); 
}  
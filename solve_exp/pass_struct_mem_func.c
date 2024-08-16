// passing the structure data member in function
#include <stdio.h>
struct student{
    int r_num;
    char name[10];
    int marks;
    
};
void detail(int r_num, char name[], int marks);
int main ()
{
    struct student s1={1,"Nidhi",78};
    detail(s1.r_num, s1.name,s1.marks);
    struct student s2={1,"Ami",66};
    detail(s2.r_num, s2.name,s2.marks);
}
void detail(int r_num, char name[], int marks)
{
    printf("roll_num=%d \t Name=%s \t marks=%d\n",r_num,name,marks);
    
}

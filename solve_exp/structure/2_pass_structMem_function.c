// passsing the structure member in function
#include<stdio.h>
struct student
{
    int roll_no;
    char name[10];
    int marks;

};
void  detail(int roll_no, char name[], int marks );

int main()
{
    struct student s1 = {1, "Nidhi", 78};
    detail(s1.roll_no,s1.name,s1.marks);

}
void  detail(int roll_no, char name[], int marks )
{
    printf("Roll no = %d \t Name = %s \t Marks = %d",roll_no,name,marks );
}
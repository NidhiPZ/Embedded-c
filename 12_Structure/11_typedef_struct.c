// typedef with structures
#include <stdio.h>
#include <string.h>

// using typedef to define an alias for structure
typedef struct students
{
	char name[50];
	char branch[50];
	int ID_no;
} stu_t;    //note this is not variable its alias name


int main()
{
    //struct student st;  --> now u dont have to write whole just simply type stu which is alias for structure
	stu_t st;   //here is st is variable declaration
	strcpy(st.name, "Sanam puri");
	strcpy(st.branch, "Embedded Engineering");
	st.ID_no = 105;

	printf("Name: %s\n", st.name);
	printf("Branch: %s\n", st.branch);
	printf("ID_no: %d\n", st.ID_no);
	return 0;
}
#include<stdio.h>
#include<string.h>

struct Student 
{
    int roll_no;
    char name[30];
    char branch[20];
    int batch;
};

int main()
{
    struct Student s1 = {101 ,"sanam puri", "ECE", 2022};
    struct Student s2 = {102 ,"Akash puri", "BCA", 2020};
   
    struct Student *ptr;
    ptr = &s1;

    printf("Roll No: %d\n",ptr -> roll_no);
    printf("Name: %s\n",ptr -> name);
    printf("Branch: %s\n",ptr -> branch);
    printf("Batch: %d\n",ptr -> batch);
    
    printf("\n");
    ptr = &s2;
    printf("Roll No: %d\n",ptr -> roll_no);
    printf("Name: %s\n",ptr -> name);
    printf("Branch: %s\n",ptr -> branch);
    printf("Batch: %d\n",ptr -> batch);


}
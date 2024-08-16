#include <stdio.h>
#include<string.h>
#define Max 5
typedef struct 
{
    char name[50];
    int age;
}Student_t;

int compareByName(const void *a, const void *b)
{
    //The void* pointers a and b are cast to Student_t*
    Student_t *s1= (Student_t *)a;
    Student_t *s2= (Student_t *)b;
    return strcmp(s1->name,s2->name);
}

void sort(Student_t stu[], int count, int (*compareFunc)(const void *a, const void *b))
{
    qsort(stu, count, sizeof(Student_t), compareFunc);
}
int main()
{
    Student_t stu[Max] = {{"Nidhi",24}, {"Ami",29}, {"Jimmy", 21},{"Ravi",35},{"Divya",32}};
    printf("sorting by name: \n");
    sort(stu, Max, compareByName);
    for(int i = 0; i<Max; i++)
    {
        printf("Name: %s \t Age: %d \n", stu[i].name, stu[i].age);
    }
}



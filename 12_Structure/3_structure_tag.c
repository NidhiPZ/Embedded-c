//structure type(using structure tag)
#include<stdio.h>
struct employee 
{
    char name;
    int age;
    int salary;
};

int manager()
{
    struct employee manager;
    manager.age = 27;
    if(manager.age > 30)
        manager.salary = 50000;
    else
        manager.salary = 35000;
    return manager.salary;

}

int main()
{
    struct employee emp1;
    struct employee emp2;
    printf("enter the salary of employee1: ");
    scanf("%d",&emp1.salary);
    printf("enter the salary of employee2: ");
    scanf("%d",&emp2.salary);
    printf("employee 1 salary is: %d\n",emp1.salary);
    printf("employee 2 salary is: %d\n",emp2.salary);
    printf("manager salary is: %d", manager());

}

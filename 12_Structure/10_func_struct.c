//passing structure as function 
#include <stdio.h>

// Define the structure
struct student 
{
    int id;
    char name[20];
    int marks;
};

// Forward declaration of the print function
void print(struct student s[], int count);

int main() 
{
    struct student s[5];
    int i;

    // Read student data
    for (i = 0; i < 5; i++) 
    {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Print student data
    print(s, 5);
    getchar(); 
    
    return 0;
}

// Print function definition
void print(struct student s[], int count)
{
    for (int i = 0; i < count; i++) 
    {
        printf("\nID: %d \t Name: %s \t Marks: %d", s[i].id, s[i].name, s[i].marks);
    }
}

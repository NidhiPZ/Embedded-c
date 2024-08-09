#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
#define HelpMenu  "-----:choices are:-----\n"           \
                  "1. Enter the student details\n"      \
                  "2. Display Students\n"               \
                  "3. Delete Student by ID\n"           \
                  "4. Find by name\n"                   \
                  "5. exit\n"                           \
                  "Enter '0' to see menu again\n "                         
                 
                  

// Define the structure
struct student 
{
    int id;
    char name[20];
    int age;
    char address[50];
};

// Function prototypes
void Display_StudentData(struct student s[], int count);
void Delete_Student(struct student s[], int* count);
void Add_Student(struct student s[], int* count);
void Find_Student(struct student s[], int count);


struct student s[MAX];  // Array of students
int count = 0;          // Number of students

int main() 
{   

    int choice;
    
        printf("%s", HelpMenu); 
        while(1)
        {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 0:
                printf("%s", HelpMenu);
                break;

            case 1:
                 Add_Student(s, &count);
                 break;
            case 2:
                Display_StudentData(s, count);
                break;
            case 3:
                Delete_Student(s, &count);
                break;
            case 4:
                Find_Student(s, count);
                break;
            case 5:
                exit(1);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
void Add_Student(struct student s[], int *count)
{
    if (*count >= MAX)
    {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    // Check if the ID already exists
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);

    // Check if the ID already exists
    for (int i = 0; i < *count; i++)
    {
        if (s[i].id == id)
        {
            printf("Error: Student with ID %d already exists. Please enter a unique ID.\n", id);
            return;
        }
    }
    // If ID is unique, proceed to add the student
    s[*count].id = id;
  
    printf("Enter Name: ");
    scanf("%s", s[*count].name);
    printf("Enter age: ");
    scanf("%d", &s[*count].age);
    getchar();
    printf("Enter Address: ");
    gets(s[*count].address);  

    (*count)++;  // Increment the student count
}
// Print function definition
void Display_StudentData(struct student s[], int count)
{
    for (int i = 0; i < count; i++) 
    {
        printf("\nID: %d \t Name: %s \t Age: %d \t Address: %s", s[i].id, s[i].name, s[i].age, s[i].address);
    }
    printf("\n");
}

// Delete function definition
void Delete_Student(struct student s[], int *count)
{
    int id, i, j;
    printf("Enter ID of student to delete: ");
    scanf("%d", &id);

    for (i = 0; i < *count; i++) 
    {
         if (s[i].id == id)  // If student with the given ID is found
        {
            for (j = i; j < *count - 1; j++)   // Shift elements to fill the gap
            {
                s[j] = s[j + 1];   // Copy the next student details to the current position
                s[j].id--;    // Decrement the ID to keep them in ascending order
            }
            (*count)--;   // Decrement the count of students
            printf("Student with ID %d deleted.\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}
void Find_Student(struct student s[], int count)
{
    char name[10],i;
    int found=0;
    printf("Enter Name of student to find: ");
    scanf("%s",&name);
    for (i = 0; i < count; i++) 
    {
         if (strcmp(s[i].name , name) == 0 ) // If student with the given ID is found
        {
            printf("\nID: %d \t Name: %s \t Age: %d \t Address: %s\n", s[i].id, s[i].name, s[i].age, s[i].address);
            found = 1;
            return;
        }
    } 
    if (!found)
       {
         printf("Student with name %s not found.\n", name);
         }
}
    

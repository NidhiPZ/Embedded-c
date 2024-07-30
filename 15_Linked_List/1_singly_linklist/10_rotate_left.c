#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node* next;
};

// Function to print the nexted list
void printList(struct node *head) 
{
    struct node *ptr = head;
    while (ptr != NULL) 
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

// Function to rotate the nexted list to the right by k positions
void *rotateRight(struct node *head, int k) 
{
    if (!head || k == 0)
         return head;

    // Calculate the length of the nexted list
    struct node *ptr = head;
    int length = 1;
    while (ptr->next) 
    {
        ptr = ptr->next;
        length++;
    }

    // Connect the last node to the head to make it circular
    ptr->next = head;

    // Find the newtail
    k = k % length;
    int NewTail = k;
    ptr = head;
    for (int i = 1; i < NewTail; i++) 
    {
        ptr = ptr->next;
    }

    // Update the head and break the circle
    head = ptr->next;
    ptr->next = NULL;

    return head;
}

// Driver code to test the function
int main() 
{
    struct node *head = NULL;
    struct node *ptr = NULL;
    int data, n, i;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input data for the first node
    printf("Enter data for node 1: ");
    scanf("%d", &data);
    head = malloc(sizeof(struct node));
    head->data = data;
    head->next = NULL;
    ptr = head;

    // Input data for remaining nodes
    for (i = 2; i <= n; i++)
     {
        struct node *new ;
        new=malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &new->data);
        new->next = NULL;
        ptr->next = new;
        ptr = new;
    }
   

    printf("Original list\n");
    printList(head);

    int k;
    printf("\nenter the position by shifted :");
    scanf("%d",&k);
    head = rotateRight(head, k);

    printf("List after rotating by %d positions\n", k);
    printList(head);

    return 0;
}

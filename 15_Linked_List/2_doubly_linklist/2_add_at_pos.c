#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Function prototypes
void insert_end(struct node **head, int data);
void print_list(struct node *head);
void insert_at_index(struct node **head, int data, int index) ;

int main()
 {
    struct node *head = NULL; // Initialize head pointer to NULL
    int data, n, i;

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input data for nodes and create the list
    for (i = 1; i <= n; i++)
     {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        insert_end(&head, data);
    }

    // Print the doubly linked list
    printf("\nThe doubly linked list is:\n");
    print_list(head);
    int index ,n_data;
    // Input index and data for the new node
    printf("\nEnter the index to insert the new node: ");
    scanf("%d", &index);
    printf("Enter data for the new node: ");
    scanf("%d", &n_data);

    // Insert the new node at the specified index
    insert_at_index(&head, n_data, index);

    // Print the updated doubly linked list
    printf("The updated doubly linked list is:\n");
    print_list(head);
}

// Function to insert a node at the end of the doubly linked list
void insert_end(struct node **head, int data)
 {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = *head;

    new_node->data = data;
    new_node->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) 
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    // Traverse to the end of the list
    while (ptr->next != NULL) 
    {
        ptr = ptr->next;
    }

    // Update the next of the last node and prev of the new node
    ptr->next = new_node;
    new_node->prev = ptr;
}

// Function to print the doubly linked list
void print_list(struct node *head)
 {
    struct node *ptr;

    while (head != NULL) 
    {
        printf("%d ", head->data);
        ptr = head;
        head = head->next;
    }
  
}

void insert_at_index(struct node **head, int data, int index) 
{
    struct node *new_node = malloc(sizeof(struct node));
    struct node *temp = *head;
    struct node *temp2 = NULL;
    int i;
    new_node->data = data;

    // Traverse to the node just before the specified index
    for (i = 0; temp != NULL && i < index - 1; i++)
    {
        temp = temp->next;
    }

    // If the index is greater than the number of nodes, insert at the end
    if (temp == NULL || temp->next == NULL) 
    {
        insert_end(head, data);
        return;
    }
    else
    { 
        // Insert the new node at the specified index
        temp2=temp->next;
        temp->next = new_node;
        temp2->prev=new_node;
        new_node->next=temp2;
        new_node->prev=temp;
    }
}
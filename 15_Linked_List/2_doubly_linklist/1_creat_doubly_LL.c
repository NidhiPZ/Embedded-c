#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void insert_end(struct node **head, int data);
void print_list(struct node *head);

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

    return 0;
}

// Function to insert a node at the end 
void insert_end(struct node **head, int data)
 {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *head;

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
    while (last->next != NULL) 
    {
        last = last->next;
    }

    // Update the next of the last node and prev of the new node
    last->next = new_node;
    new_node->prev = last;
}

// Function to print the doubly linked list
void print_list(struct node *head)
 {
    struct node *last;

    // Traverse the list in the forward direction
    printf("Forward traversal:\n");
    while (head != NULL) 
    {
        printf("%d ", head->data);
        last = head;
        head = head->next;
    }
    printf("\n");

    // Traverse the list in the backward direction
    printf("Backward traversal:\n");
    while (last != NULL) 
    {
        printf("%d ", last->data);
        last = last->prev;
    }
    printf("\n");
}

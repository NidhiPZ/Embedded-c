#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node* find_middle(struct node *head);
void print_data(struct node *head);
void insert_after_node(struct node *prev_node, int data) ;

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
    head->link = NULL;
    ptr = head;

    // Input data for remaining nodes
    for (i = 2; i <= n; i++) 
    {
        struct node *new_node = malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &new_node->data);
        new_node->link = NULL;
        ptr->link = new_node;
        ptr = new_node;
    }

    // Print original list
    print_data(head);

    // Find the middle node
    struct node *middle = find_middle(head);
    int new_data;
    if (middle != NULL) 
    {
        // Print the middle node data
        printf("Middle node data: %d\n", middle->data);
        printf("Enter data to be inserted after the middle node: ");
        scanf("%d", &new_data);

        // Insert new node after the middle node
        insert_after_node(middle, new_data);

        // Print updated list
        printf("List after inserting new node:\n");
        print_data(head);
    } 
    else
    {
        printf("The list is empty.\n");
    }
    return 0;
}

struct node* find_middle(struct node *head)
 {
    if (head == NULL) 
        return NULL;

    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->link != NULL) 
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    return slow;
}
void insert_after_node(struct node *prev_node, int data) 
{
    if (prev_node == NULL) 
    {
        printf("The given previous node cannot be NULL.\n");
        return;
    }

    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->link = prev_node->link;
    prev_node->link = new_node;
}

void print_data(struct node *head)
 {
    if (head == NULL)
     {
        printf("The linked list is empty.\n");
        return;
    }

    while (head != NULL) 
    {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

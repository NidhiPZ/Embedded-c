#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void *DescendingOrder(struct node *head);
void print_data(struct node *head);

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

    print_data(head);
    head = DescendingOrder(head);
    printf("\nAfter sorting:\n");
    print_data(head);

    return 0;
}

void print_data(struct node *head)
 {
    if (head == NULL) 
        printf("The linked list is empty\n");

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void *DescendingOrder(struct node *head) 
{
    if (head == NULL || head->link == NULL)
        return head;

    struct node *sorted = NULL;

    while (head != NULL) 
    {
        struct node *current = head;
        head = head->link;

        if (sorted == NULL || sorted->data <= current->data) 
        {
            current->link = sorted;
            sorted = current;
        }
        else 
        {
            struct node *temp = sorted;
            while (temp->link != NULL && temp->link->data > current->data)
            {
                temp = temp->link;
            }
            current->link = temp->link;
            temp->link = current;
        }
    }
    return sorted;
}

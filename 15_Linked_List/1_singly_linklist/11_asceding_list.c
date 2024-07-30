#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};
void *AscendingOrder(struct node *head);
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
        struct node *new ;
        new=malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &new->data);
        new->link = NULL;
        ptr->link = new;
        ptr = new;
    }
    
    print_data(head);
    head = AscendingOrder(head);
    printf("\nafter sorting:\n");
    print_data(head);
    
}
void print_data(struct node *head) 
{
    if (head == NULL) 
        printf("The linked list is empty\n");
    
    struct node *ptr = head;
    while (ptr != NULL)
     {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void *AscendingOrder(struct node *head)
{
     // Check for edge cases: empty list or single-node list
    if (head == NULL || head->link == NULL)
        return head;
        // Initialize the sorted list to NULL
        struct node *sorted = NULL;

        while (head != NULL)
        {
            // Detach the current node from the list
            struct node *current = head;
            head = head->link;

            //Insert at beginning if sorted is empty or the current node is smaller than the head of sorted
            if (sorted == NULL || sorted->data >= current->data)
            {
                current->link = sorted;
                sorted = current;
            }
            else 
            {
               // Find the correct position to insert the current node
                struct node *temp = sorted;
                while (temp->link != NULL && temp->link->data < current->data)
                {
                    temp = temp->link;
                }
                // Insert the current node at the correct position
                current->link = temp->link;
                temp->link = current;
        
            }
        }
        return sorted;   // Return the head of the sorted list
}

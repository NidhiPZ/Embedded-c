#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};
void *add_beg(struct node *head, int data);
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

    int d;
    printf("\nEnter the data to insert first: ");
    scanf("%d",&d);
    head = add_beg(head,d);

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

void *add_beg(struct node *head, int data)
{
    struct node *ptr = NULL;
    ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

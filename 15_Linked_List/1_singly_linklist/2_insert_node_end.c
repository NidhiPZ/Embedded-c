#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
void add_at_end(struct node *head, int data);

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
    printf("\nEnter data to add at the end: ");
    scanf("%d", &d);
    add_at_end(head,d);

    print_data(head);

}

void print_data(struct node *head)
{
    if(head == NULL)
        printf("link list is empty");

    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}
void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link =NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
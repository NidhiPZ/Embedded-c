#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};
void print_data(struct node *head);
void *add_at_pos(struct node *head, int data, int pos);

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

    int d,p;
    printf("\nEnter the data to insert: ");
    scanf("%d",&d);
    printf("Enter the position to insert: ");
    scanf("%d",&p);
   head = add_at_pos(head,d,p);
    
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

void *add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = malloc(sizeof(struct node));
    struct node *p;
    p = head;

    int i = 0;
    while(i != pos - 1)
    {
        p = p->link;
        i++;
    }
    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
    return head;
}
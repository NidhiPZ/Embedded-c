#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
void *reverse(struct node *head);


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

    head= reverse(head);

    printf("\n");
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
void *reverse(struct node *head)
{
    struct node *prevptr =NULL;
    struct node *currptr = head;
    struct node *nextptr;

    while(currptr != NULL)
    {
        nextptr=currptr->link;
        currptr->link = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
    return head;
}
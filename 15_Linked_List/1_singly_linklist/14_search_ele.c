#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void print_data(struct node *head);
void search(struct node *head, int num);

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
    
    int num;
    printf("enter the element to search: ");
    scanf("%d",&num);
    search(head,num);
}

void search(struct node *head, int num)
{
    int index = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if(ptr->data == num)
        {
            printf("element %d found at index %d",num,index);
            return;
        }
        ptr=ptr->link;
        index++;
    }
    printf("element %d doesn't exist in list",num);
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
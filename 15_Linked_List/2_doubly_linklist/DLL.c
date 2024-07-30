#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
void Traverse_print(struct node *ptr)
{
    while(ptr!=NULL){
            printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insert_At_Begain(struct node *head,int data)
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->prev=NULL;
    p->next=head;
    return p;
};

struct node *insert_At_Index(struct node *head,int data,int index)
{
    struct node *ptr=head->next;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *temp=head;
    new->data=data;
    int i=0;
    while(i!=index-1)
    {
        temp=temp->next;
        ptr=ptr->next;
        i++;
    }
    new->next=ptr;
    ptr->prev=new;
    temp->next=new;
    new->prev=temp;
    return head;
}; 

struct node* insert_At_End(struct node*head,int data)
{
    struct node*ptr=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->prev=ptr;
    new->next=NULL;
    return head;
};

struct node* delete_At_Begain(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
};
struct node*delete_At_Index(struct node*head,int index)
{
    struct node*ptr=head;
    struct node*temp=head->next;

    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    free(temp);
    return head;
};

struct node*delete_At_End(struct node *head)
{
    struct node*ptr=head;
    struct node*temp=head->next;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(temp);
    return head;
};
int main()
{
    int d1,d2,n,d3;
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*n2=(struct node*)malloc(sizeof(struct node));
    struct node*n3=(struct node*)malloc(sizeof(struct node));
    struct node*n4=(struct node*)malloc(sizeof(struct node));
    struct node*n5=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=10;
    head->next=n2;

    n2->prev=head;
    n2->data=20;
    n2->next=n3;

    n3->prev=n2;
    n3->data=30;
    n3->next=n4;

    n4->prev=n3;
    n4->data=40;
    n4->next=n5;

    n5->prev=n4;
    n5->data=50;
    n5->next=NULL;

    Traverse_print(head);

    printf("\n\nEnter The data for the first node:");
    scanf("%d",&d1);
    head=insert_At_Begain(head,d1);
    Traverse_print(head);

    printf("\n\nEnter the index :");
    scanf("%d",&n);
    printf("Enter the data for new node:");
    scanf("%d",&d2);
    head=insert_At_Index(head,d2,n);
    Traverse_print(head);

    printf("\n\nEnter The data for the last node:");
    scanf("%d",&d3);
    head=insert_At_End(head,d3);
    Traverse_print(head);

    printf("\n\nAfter Deleting First node\n");
    head=delete_At_Begain(head);
    Traverse_print(head);

    int i;
    printf("\n\nEnter the Index:");
    scanf("%d",&i);
    printf("After Deleting Index node:\n");
    head=delete_At_Index(head,i);
    Traverse_print(head);

    printf("\n\nAfter Deleting Last node\n");
    head=delete_At_End(head);
    Traverse_print(head);
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *link;
};
struct node *middle(struct node *head);
void *reverse(struct node *head);
bool pallindrome(struct node *head);
void print_data(struct node *head) ;


int main()
{
    struct node *head = NULL;
    struct node *ptr = head;
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
    
     //print the original list
    printf("The linked list is: \n");
    print_data(head);
    printf("\n");
  head =  reverse(head);
    print_data(head);

    int res=0;
    //call the function to check whether the list is pallindrome or not
    res = pallindrome(head);
    if(res)
    {
        printf("\nList is a pallindrome.\n");
    }
    else
    {
        printf("\nList is not a pallindrome.\n");
    }

    return 0;
}
void print_data(struct node *head) 
{
    struct node *ptr = head;
    while (ptr != NULL)
     {
        printf("%d->", ptr->data);
        ptr = ptr->link;
    }
    printf("NUll");
}

struct node* middle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while(fast!=NULL && fast->link!=NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    return slow;
}

// function will reverse the list
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

bool pallindrome(struct node *head)
{
    if(head == NULL)
        return true;
    
    struct node *mid = middle(head);        //call the function to find the mid of the list
    struct node *last = reverse(mid->link);  //call the function to reverse the list from middle

    struct node *current = head;

    //cheack each element from list 
    //first element = last element
    //second element = second last element
    //and so on....
    while(last != NULL)
    {
        if(last->data != current->data)
            return false;
        last = last->link;
        current = current->link;
    }
    return true;
}
// 
/*
Suppose we have a linked list: 1 -> 2 -> 3 -> 2 -> 1.
Step 1: Find the middle of the list. The middle is 3.
Step 2: Reverse the second half: 1 <- 2 <- 3.
Step 3: Compare the first half (1 -> 2 -> 3) with the reversed second half (1 <- 2 <- 3).
*/
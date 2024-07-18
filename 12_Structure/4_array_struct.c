#include<stdio.h>
struct Book 
{
    char title[50];
    float price;
    int page;
};

int main()
{
    struct Book b[2];
    int i;
    for(i=0; i<2; i++)
    {
        printf("enter the Book %d title: ",i+1);
        scanf("%s",&b[i].title);     
        printf("enter the Book %d price: ",i+1);
        scanf("%f",&b[i].price);
        printf("enter the Book %d page: ",i+1);
        scanf("%d",&b[i].page);
        

    }
    printf("\n");
    for(i=0; i<2; i++)
    {
        printf("Book %d details: \n",i+1);
        printf("Title : %s\n", b[i].title);
        printf("price : %.2f\n", b[i].price);
        printf("page : %d\n", b[i].page);
    }
}
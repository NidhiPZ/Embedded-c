#include<stdio.h>
//Define a structure named 'book' to hold information about a book
struct book
{
    char title[50];
    float price;
    int pages;
};

int main()
{
    struct book book1 = {"learn c", 650.50, 300};   // Initialize a book structure with sample values

    printf("Title: %s\n", book1.title);   //accessing with '.' book1.title
    printf("price: %.3f\n", book1.price);
    printf("Pages: %d\n", book1.pages);
    printf("size of book struct : %d", sizeof(struct book));
}

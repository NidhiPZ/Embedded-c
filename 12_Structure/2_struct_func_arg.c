#include <stdio.h>
#include <string.h>
 
struct Books{
    char title[50];
    float price;
    int pages;
};

// function declaration 
void printBook(struct Books book);

int main()
{
    struct Books Book1;        //Declare Book1 of type Book 
    struct Books Book2;        // Declare Book2 of type Book 
 
    //book 1 specification 
    strcpy(Book1.title, "C Programming");
    Book1.price = 999;
    Book1.pages = 100;
   

   //book 2 specification 
    strcpy(Book2.title, "Embedded system");
    Book2.price = 455.80;
    Book2.pages = 500;
   
 
   // print Book1 info 
    printBook(Book1);
    printf("\n");
   // Print Book2 info
    printBook(Book2);
    return 0;
}

void printBook(struct Books book)
{
   printf("Book title : %s\n", book.title);
   printf("Price : %2f\n", book.price);
   printf("page : %d\n", book.pages);
}
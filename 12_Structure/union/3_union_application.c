#include<stdio.h>
#pragma pack(1)
struct store
{
    double price;
    union 
    {
        struct 
        {
            char *title;
            char author;
            int page;

        }book;
        struct 
        {
            int color;
            int size;
            char *design;
        }shirt;

    }item;  
};

int main()
{
    struct store s;
    s.item.book.title="embedded C";
    s.item.book.author= " paulo";
    s.item.book.page = 20;
    printf("%s\n",s.item.book.title);
    printf("%d",sizeof(s));

}
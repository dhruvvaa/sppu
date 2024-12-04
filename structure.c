#include<stdio.h>
#include<string.h>
struct Books
{
    char title[100];
    char author[50];
    char sub[100];
    float price;
};
struct Books book1;
struct Books book2;
struct Books book3;
int main()
{
    strcpy(book1.title,"It Ends With Us");
    strcpy(book1.author,"Collen Hoover");
    strcpy(book1.sub,"A rom-com representing characters Ryle, Atlas and Lily.");
    book1.price=12.99;
    strcpy(book2.title,"Chicken Soup for the Indian Soul");
    strcpy(book2.author,"Jack Canfield");
    strcpy(book2.sub,"It talks about teens growing up. A collection that will encourage, inspire and make you laugh.");
    book2.price=2.30;
    strcpy(book3.title,"November 9");
    strcpy(book3.author,"Collen Hoover");
    strcpy(book3.sub,"A rom-com representing characters Fallon and Ben.");
    book3.price=16.99;

    printf("\nBooks Available\n");
    printf("\n1.\tTitle:%s",book1.title);
    printf("\n\tAuthor:%s",book1.author);
    printf("\n\tAbout:%s",book1.sub);
    printf("\n\tPrice:$%f\n",book1.price);
    printf("\n2.\tTitle:%s",book2.title);
    printf("\n\tAuthor:%s",book2.author);
    printf("\n\tAbout:%s",book2.sub);
    printf("\n\tPrice:$%f\n",book2.price);
    printf("\n3.\tTitle:%s",book3.title);
    printf("\n\tAuthor:%s",book3.author);
    printf("\n\tAbout:%s",book3.sub);
    printf("\n\tPrice:$%f\n",book3.price);
    return 0;
}
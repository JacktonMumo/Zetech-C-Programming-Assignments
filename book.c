// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct book{
    char title[30];
    char author[30];
    int pub_year;
    char isbn[13];
    float price;
};
    int main() {
        struct book my_book = {
            "Introduction to C Programming",
            "John Smith",
            2022,
            "9780131103627",
            49.99
        };
    printf("Title: %s \n", my_book.title);
    printf("Author: %s \n", my_book.author);
    printf("Publication Year: %d \n", my_book.pub_year);
    printf("ISBN: %s \n", my_book.isbn);
    printf("Price: %s \n", my_book.price);
    
    struct book user_book;
    
    printf("\n Enter the book title:");
    scanf("\n %c", user_book.title);
    printf("\n Enter the author's name:");
    scanf("\n %c", user_book.author);
    printf("\n Enter the publication year:");
    scanf("\n %c", user_book.pub_year);
    printf("\n Enter the ISBN:");
    scanf("\n %c", user_book.isbn);
    printf("\n Enter the price:");
    scanf("\n %c", user_book.price);
    
    printf("\nBook Details:\n");
    printf("Title: %s\n",user_book.title);
    printf("Author: %s\n",user_book.author);
    printf("Publication Year: %d\n",user_book.pub_year);
    printf("ISBN: %s\n",user_book.isbn);
    printf("Price: %.2f\n",user_book.price);
        
    
        
    return 0;
}
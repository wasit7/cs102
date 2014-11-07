#include <stdio.h>
#include <string.h>
struct Book{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;

};
struct Student{
    char name[100];
    int id;
    float height;
};

int main(void)
{
    int x;
    struct Book book1;
    struct Book series[3];
    struct Student s1;
    strcpy(book1.author,"Greg Michelson");
    book1.book_id=12546;
    strcpy(book1.subject,"Mathematics");
    strcpy(book1.title,"Geometry of Buliding");


    strcpy(series[0].author,"Wasit Limprasert");
    series[0].book_id=1866;
    strcpy(series[0].subject,"Mathematics");
    strcpy(series[0].title,"Numerical methods");

    printf("author: %s\n",book1.author);
    printf("id: %d\n",book1.book_id);
    printf("subject: %s\n",book1.subject);
    printf("title: %s\n",book1.title);
    return 0;
}


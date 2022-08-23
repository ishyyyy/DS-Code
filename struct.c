#include<stdio.h>
#include<stdlib.h>
struct book
{
    int accs_no;
    char name_of_author;
    char book_title;
};
void value(struct book *a,int h,char i,char j)
a->accs_no=h;
a->name_of_author=i;
a->b
int main(){
    struct book details;
    details.accs_no=73767;
    details.name_of_author="charles";
    details.book_title="the devil";
    //displaying information
    printf("%d\n",details.accs_no);
    printf("%d\n",details.name_of_author);
    printf("%s",details.book_title);
    //adding a new book
    printf("adding a new book :\n");
    char new_book;
    printf("enter the book\n");
    scanf("%s",&new_book);
    new_book=details.name_of_author;
    printf("new entered book=%s\n",new_book);
    value(&details,4455,"harry","runway");
    
    return 0;
}


   
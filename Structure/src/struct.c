/**
 * @author aaron
 * @version 1.0
 * @fileName struct.c
 * @email wzj020109@163.com
 * @date 2022-01-02
 */


#include <stdio.h>
#include <string.h>
#include "books.h"


int main(int argc, char *argv[]) {

    struct Books book1; /* 声明 book1，类型为 Books */
    struct Books book2; /* 声明 book2，类型为 Books */

    /* Book1 详述 */
    strcpy( book1.title, "C Programming" );
    strcpy( book1.author, "Nuha Ali" ); 
    strcpy( book1.subject, "C Programming Tutorial" );
    book1.book_id = 6495407;

    /* book2 详述 */
    strcpy( book2.title, "Telecom Billing" );
    strcpy( book2.author, "Zara Ali" );
    strcpy( book2.subject, "Telecom Billing Tutorial" );
    book2.book_id = 6495700;

    /* 输出 book1 信息 */
    printBook( book1 );

    /* 输出 book2 信息 */
    printBook( book2 );

    return 0;
}

void printBook( struct Books book ) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);

    printf("=========================\n");
}

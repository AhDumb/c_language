/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>
#include <string.h>
#include "main.h"

int main(int argc, char *argv[]) {

    Book book;

    strcpy( book.title, "C 教程" );
    strcpy( book.author, "Runoob" );
    strcpy( book.subject, "编程语言" );
    book.book_id = 12345;


    
    return 0;
}

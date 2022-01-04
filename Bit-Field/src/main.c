/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */

#include <stdio.h>

/* 定义简单的结构 */
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main(int argc, char *argv[]) {

    printf("Memory size occupied by status1 : %ld\n", sizeof(status1));
    printf("Memory size occupied by status2 : %ld\n", sizeof(status2));
    
    return 0;
}

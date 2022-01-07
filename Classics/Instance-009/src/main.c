/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-07
 */


#include <stdio.h>

int main() {

    int score;
    char grade;

    printf("请输入成绩: ");
    scanf("%d", &score);

    grade = ( score >= 90 ) ? 'A' : (( score >= 60 ) ? 'B' : 'C');

    /** if ( score >= 90 ) {
        grade = 'A';
    } else if ( score >= 60 ) {
        grade = 'B';
    } else {
        grade = 'C';
    } */

    /* 两种方法 结果相同 */

    printf("%c\n", grade);
    return 0;
}

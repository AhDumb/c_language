/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-09
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

    int day = 9, x1 = 0, x2 = 1;

    while ( day > 0 ) {
        x1 = ( x2 + 1 ) * 2;
        x2 = x1;
        day--;
    }

    printf("总数: %d\n", x1);

    return 0;
}

/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-06
 */

#include <stdio.h>

int main() {

    int i, j;

    for (i = 2; i < 100; i++) {
        for (j = 2; j < 100; j++) {
            if (i % j == 0) { /* 取余数 */
                break;
            }
        }
        if (j >= i) {
            printf("%d\n", i);
        }
    }
    return 0;
}

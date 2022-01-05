/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-05
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    int i, j, m, n, x;

    for (i = 1; i < 168 / 2 + 1; i++) {
        if ( 168 % i == 0 ) {
            j = 168 / i;
            if ( i > j && ( i + j ) % 2 == 0 && ( i - j ) % 2 == 0 ) {
                m = ( i + j ) / 2;
                n = ( i - j ) / 2;
                x = n * n - 100;
                printf("%d + 100 = %d * %d\n", x, n, n);
                printf("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }

    return 0;
}

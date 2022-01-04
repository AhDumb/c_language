/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    int i, j, k;
    printf("\n");
    for (i = 1; i < 5; i++) { /* 以下为三重循环 */
        for (j = 1; j < 5; j++) {
            for (k = 1; k < 5; k++) { /* 确保i、j、k三位互不相同 */
                if ( i!=k && i!=j && j!=k ) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    
    return 0;
}

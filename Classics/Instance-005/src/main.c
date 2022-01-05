/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-05
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    int x, y, z, t;

    printf("\n请输入三个数字:\n");
    printf("> ");
    scanf("%d %d %d", &x, &y, &z);

    if ( x > y ) {
        t = x; x = y; y = t;
    }
    if ( x > z ) {
        t = z; z = x; x = t;
    }
    if ( y > z ) {
        t = y; y = z; z = t;
    }

    printf("从小到大排序: %d %d %d\n", x, y, z);
    
    return 0;
}

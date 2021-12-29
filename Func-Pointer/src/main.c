/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2021-12-29
 */


#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

int maxThree(int x, int y, int z) {
    if (x > y) {
        if (x > z) {
            return x;
        } else {
            return z;
        }
    } else {
        if (y > z) {
            return y;
        } else {
            return z;
        }
    }
}

int main(int argc, char *argv[]) {

    //int ( *p )(int, int) = & max; /* & 可以省略 */
    //int a, b, c, d;

    int ( *t )( int, int, int ) = & maxThree;
    int a, b, c, d;

    printf("请输入三个数字: ");
    scanf("%d %d %d", & a, & b, & c);

    /* 等价于直接调用函数 d = max( max( a, b ), c ) */
    d = t( a, b, c );

    printf("最大的数字是: %d\n", d);

    return 0;
}

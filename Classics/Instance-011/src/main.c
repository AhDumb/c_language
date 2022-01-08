/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-07
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    int s = 0, a, n, t;
    printf("请输入 a 和 n: ");
    scanf("%d %d", &a, &n);
    t = a;

    while ( n > 0 ) {
        s += t;
        a = a * 10;
        t += a;
        n--;
    }

    printf("a+aa+aaa...=%d\n", s);


    return 0;
}

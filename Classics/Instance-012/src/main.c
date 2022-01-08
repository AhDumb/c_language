/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-08
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    float h, s;
    h = s = 100;
    h = h / 2; /* 第一次反弹的高度 */

    for (int i = 2; i <= 10; i++) {
        s = s + 2 * h;
        h = h / 2;
        printf("第%d反弹的高度: %f\n", i, h);
    }

    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
    
    return 0;
}

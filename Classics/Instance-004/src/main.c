/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-05
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    int day, mount, year, sum, leap;

    printf("\n请输入年、月、日，格式为：年 月 日（2015 12 10）\n");
    printf("> ");

    scanf("%d %d %d", &year, &mount, &day);

    switch ( mount ) {
        case 1: sum = 0; break;
        case 2: sum = 31; break;
        case 3: sum = 59; break;
        case 4: sum = 90; break;
        case 5: sum = 120; break;
        case 6: sum = 151; break;
        case 7: sum = 181; break;
        case 8: sum = 212; break;
        case 9: sum = 234; break;
        case 10: sum = 273; break;
        case 11: sum = 304; break;
        case 12: sum = 334; break;
        default: printf("data error\n"); break;
    }

    sum = sum + day;
    if ( year%400 == 0 || ( year%4 == 0 && year % 100 != 0 ) ) {
        leap = 1;
    } else {
        leap = 0;
    }

    if ( leap == 1 && mount > 2 ) {
        sum++;
    }

    printf("这是这一年的第 %d 天。\n", sum);

    return 0;
}

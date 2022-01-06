/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>
#define TEN 100000
#define TWENTY 200000
#define FORTY 400000
#define SIXTY 600000
#define HUNDRED 1000000

int main(int argc, char *argv[]) {

    double i;
    double bonus1, bonus2, bonus4, bonus6, bonus10, finalBonus;
    /**
     * bonus1 第一类 低于10万元
     * bonus2 第二类 高于10万 低于20万
     * bonus4 第三类 高于20万 低于40万
     * bonus6 第四类 高于40万 低于60万
     * bonus10 第五类 高于60万 低于100万
     */

    printf("你的净利润是: ");
    scanf("%lf", &i);

    bonus1 = TEN * 0.1;
    bonus2 = bonus1 + TEN * 0.075;
    bonus4 = bonus2 + TWENTY *0.05;
    bonus6 = bonus4 + TWENTY * 0.03;
    bonus10 = bonus6 + FORTY * 0.015;

    if ( i <= TEN ) { /* 小于等于 10W */
        finalBonus = i * 0.1;
    } else if ( i <= TWENTY ) { /* 小于等于 20W */
        finalBonus = bonus1 + ( i - TEN ) * 0.075;
    } else if ( i <= FORTY ) { /* 小于等于 40W */
        finalBonus = bonus2 + ( i - TWENTY ) * 0.05;
    } else if ( i <= SIXTY ) { /* 小于等于 60W */
        finalBonus = bonus4 + ( i - FORTY ) * 0.03;
    } else if ( i <= HUNDRED ) { /* 小于等于 100W */
        finalBonus = bonus6 + ( i - SIXTY ) * 0.015;
    } else if ( i > HUNDRED ) { /* 大于 100W */
        finalBonus = bonus10 + ( i - HUNDRED ) * 0.01;
    }

    printf("提成为: %lf\n", finalBonus);

    return 0;
}

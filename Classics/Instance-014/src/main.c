/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-09
 */


#include <stdio.h>

/*! \enum rival
 *
 *  Detailed description
 */
enum rival { 
    x = 120,
    y,
    z
};

int main() {

    enum rival a, b, c;

    for ( a = x; a <= z; a++ ) {
        for ( b = x; b <= z; b++ ) {
            for ( c = x; c <= z; c++ ) {
                if ( a != x && c != x && c != z && a != b && b != c && a != c ) {
                    printf("a = %c\nb = %c\nc = %c\n", a, b, c);
                }
            }
        }
    }
    
    return 0;
}

/**
 * @author aaron
 * @version 1.0
 * @fileName char.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    char c[100];

    printf("Enter a value: ");
    gets( c );

    printf("\nYou entered: ");
    puts( c );
    printf("\n");
    
    return 0;
}

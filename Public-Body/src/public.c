/**
 * @author aaron
 * @version 1.0
 * @fileName public.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>
#include <string.h>
#include "public.h"

int main(int argc, char *argv[]) {

    union Data data;

    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy( data.str, "C Programming" );
    printf("data.str : %s\n", data.str);
    
    return 0;
}


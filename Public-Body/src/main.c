/**
 * @author aaron
 * @version 1.0
 * @fileName main.c
 * @email wzj020109@163.com
 * @date 2022-01-04
 */


#include <stdio.h>
#include <string.h>
#include "public.h"

int main(int argc, char *argv[]) {

    union Data data;

    printf("Memory size occupied by data : %ld\n", sizeof(data));
    return 0;
}

#include <stdio.h>
#include "aux.h"

void print_magic_number(){
    extern int magic_number;
    printf("MAGIC NUMBER: %d\n", magic_number);
}

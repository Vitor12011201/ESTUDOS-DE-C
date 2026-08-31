#include <stdio.h>
#include <stdlib.h>
#include "1-calc.h"

int main(void) {
    printf("=== EXAMPLE 1: Compilation and Linking with Object Files ===\n");

    int res_mult = multiply(6, 7);
    int res_pow = power(2, 8);

    printf("6 * 7 = %d\n", res_mult);
    printf("2^8   = %d\n", res_pow);

    return EXIT_SUCCESS;
}
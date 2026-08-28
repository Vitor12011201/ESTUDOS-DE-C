#include <stdio.h>
#include <stdlib.h>
#include "1703-globals.h"

/*
 * ATTEMPT TO ACCESS STATIC VARIABLE:
 * If you uncomment the line below, the Linker (ld) will emit a compilation error:
 * "undefined reference to 'module_secret'"
 */
// extern int module_secret; // LINKAGE ERROR!

int main(void) {
    printf("=== EXAMPLE 1: extern vs static (External vs Internal Linkage) ===\n");

    printf("Initial value of global_counter (via extern): %d\n", global_counter);

    increment_counter();
    printf("Value of global_counter after increment_counter(): %d\n", global_counter);

    // Direct modification of the external variable
    global_counter = 500;
    printf("Value of global_counter directly modified in main: %d\n", global_counter);

    return EXIT_SUCCESS;
}
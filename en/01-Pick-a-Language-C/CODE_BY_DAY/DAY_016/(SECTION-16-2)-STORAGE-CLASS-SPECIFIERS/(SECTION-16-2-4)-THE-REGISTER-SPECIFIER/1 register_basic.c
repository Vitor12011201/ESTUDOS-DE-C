/* OBJECTIVE: Demonstrate the use of the 'register' specifier in a loop accumulator and exemplify the strict prohibition of taking its address with the '&' operator. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("=== EXAMPLE 1: Basic register and Address Restriction ===\n");

    // Hint to the compiler to keep 'i' and 'sum' in CPU registers
    register int i;
    register int sum = 0;

    // High-frequency loop using variables in registers
    for (i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("Sum from 1 to 10 calculated via register: %d\n", sum);

    /*
     * COMPILATION ERROR DEMONSTRATION (ISO C Rule):
     * If you uncomment the line below, the compiler (GCC/Clang) will emit an error:
     * "error: address of register variable 'i' requested"
     *
     * CPU registers do not reside in RAM memory; therefore, they DO NOT have an address.
     */
    // int *ptr = &i; // COMPILATION ERROR!

    return EXIT_SUCCESS;
}
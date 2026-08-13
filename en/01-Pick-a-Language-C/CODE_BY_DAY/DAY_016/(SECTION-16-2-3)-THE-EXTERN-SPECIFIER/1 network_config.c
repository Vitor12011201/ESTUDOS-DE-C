/* OBJECTIVE: Demonstrate the use of the 'extern' specifier in a single C file for forward declaration and inside a local block. */

#include <stdio.h>
#include <stdlib.h>

// Forward declaration with extern: warns the compiler that the variable exists,
// allowing functions above the actual definition to use it without compilation errors.
extern int g_counter;

void increment(void) {
    // Accesses the global variable declared at the top via extern
    g_counter += 10;
}

int main(void) {
    printf("=== EXAMPLE 1: extern in a Single File ===\n");

    printf("Initial value of g_counter: %d\n", g_counter);

    increment();
    printf("Value after increment():    %d\n", g_counter);

    // USING extern IN A LOCAL BLOCK SCOPE:
    {
        // Ensures the explicit reference to the global symbol within this block
        extern int g_counter;
        g_counter = 100;
        printf("Value changed in the inner block: %d\n", g_counter);
    }

    printf("Final value in main: %d\n", g_counter);

    return EXIT_SUCCESS;
}

// ACTUAL DEFINITION OF THE GLOBAL VARIABLE (Physical memory allocation in RAM):
// Declared after its usage in main to demonstrate the power of 'extern'.
int g_counter = 50;
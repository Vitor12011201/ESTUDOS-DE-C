// ============================================================================
// File: 3-foo.c
// ============================================================================
// Entry point (Main)
#include <stdio.h>
#include <stdlib.h>
#include "1-bar.h" // Includes the add() function prototype

int main(void) {
    printf("=== EXAMPLE 1: Prototype via Header ===\n");

    int result = add(2, 3);
    printf("Result of add(2, 3): %d\n", result);

    return EXIT_SUCCESS;
}
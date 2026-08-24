#include <stdio.h>
#include <stdlib.h>

// Intentional double inclusion to test the Header Guard:
#include "1-math_utils.h"
#include "1-math_utils.h" // Without #ifndef, it would cause "redefinition of 'struct Point'" error

int main(void) {
    printf("=== EXAMPLE 1: Protection Against Duplicate Inclusion ===\n");

    Point p1 = {10, 20};
    Point p2 = {5, 15};

    int result = sum_points(p1, p2);
    printf("Sum of coordinates: %d\n", result);

    return EXIT_SUCCESS;
}
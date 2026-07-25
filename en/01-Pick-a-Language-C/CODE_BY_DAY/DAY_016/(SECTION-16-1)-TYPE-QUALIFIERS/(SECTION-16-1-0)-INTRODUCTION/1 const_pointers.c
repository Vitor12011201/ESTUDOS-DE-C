#include <stdio.h>

/* OBJECTIVE: Demonstrate the fundamental difference between a pointer to constant data
   (const int *) and a constant pointer (int * const). */

int main() {
    int value_a = 10;
    int value_b = 20;

    // 1. Pointer to constant data: The VALUE cannot change via the pointer, but the ADDRESS can.
    const int *ptr_data_const = &value_a;
    // *ptr_data_const = 15; // COMPILATION ERROR!
    ptr_data_const = &value_b; // VALID: The pointer now points to value_b.

    // 2. Constant pointer: The ADDRESS is fixed, but the pointed VALUE can be modified.
    int * const ptr_fixed = &value_a;
    *ptr_fixed = 99; // VALID: The value inside value_a changed to 99.
    // ptr_fixed = &value_b; // COMPILATION ERROR! The pointer is constant.

    printf("--- Constant Pointers Test ---\n");
    printf("Value A modified via ptr_fixed: %d\n", value_a);
    printf("Value B read via ptr_data_const: %d\n", *ptr_data_const);

    return 0;
}
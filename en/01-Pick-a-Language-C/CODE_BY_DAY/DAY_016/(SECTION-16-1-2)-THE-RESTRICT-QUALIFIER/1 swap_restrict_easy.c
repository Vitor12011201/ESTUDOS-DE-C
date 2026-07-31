#include <stdio.h>

/* OBJECTIVE: Demonstrate the basic use of 'restrict' in function parameters
   and warn about Undefined Behavior (UB) if the rule is violated. */

void swap_values(int *restrict a, int *restrict b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("--- Correct Use of restrict ---\n");
    printf("Before: x = %d, y = %d\n", x, y);
    
    // VALID: 'x' and 'y' live in completely different memory addresses
    swap_values(&x, &y);
    
    printf("After: x = %d, y = %d\n\n", x, y);

    // --- THE DANGER ---
    // VIOLATION OF THE CONTRACT: Passing the same address to both 'restrict' pointers
    // triggers Undefined Behavior (UB).
    
    // swap_values(&x, &x); // NEVER DO THIS!

    return 0;
}
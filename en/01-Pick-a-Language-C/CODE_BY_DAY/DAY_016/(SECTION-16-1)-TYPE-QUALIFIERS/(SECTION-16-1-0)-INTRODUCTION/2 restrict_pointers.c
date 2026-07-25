#include <stdio.h>

/* OBJECTIVE: Demonstrate how 'restrict' allows the compiler to keep values in
   fast CPU registers without needing to reload from RAM on each iteration. */

// Without 'restrict', the compiler assumes that 'dest' and 'src' might point to the
// same memory (pointer aliasing) and reloads 'factor' from RAM on each cycle.
void add_vector_optimized(int * restrict dest, const int * restrict src, int * restrict factor, int size) {
    for (int i = 0; i < size; i++) {
        // Since the compiler KNOWS nothing overlaps, it can vectorize this operation
        dest[i] = src[i] + (*factor);
    }
}

int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {0};
    int multiplier = 10;

    add_vector_optimized(b, a, &multiplier, 4);

    printf("--- Result of the Operation with 'restrict' ---\n");
    for (int i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}
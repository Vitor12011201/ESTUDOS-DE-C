#include <stdio.h>
#include <stdatomic.h> // Required header for atomic types in C11

/* OBJECTIVE: Demonstrate the two syntaxes for atomic declaration in C11
   and the use of indivisible read and modify functions. */

int main() {
    // Syntax 1: Using the _Atomic qualifier directly
    _Atomic int counter_a = 0;

    // Syntax 2: Using the convenient alias from <stdatomic.h>
    atomic_int counter_b = ATOMIC_VAR_INIT(100);

    printf("--- Basic Atomic Operations (C11) ---\n");

    // Atomic modifications guaranteed by hardware
    atomic_fetch_add(&counter_a, 5);  // counter_a += 5 (indivisible)
    atomic_fetch_sub(&counter_b, 10); // counter_b -= 10 (indivisible)

    // Atomic read guaranteed (prevents partial/corrupted reads)
    int val_a = atomic_load(&counter_a);
    int val_b = atomic_load(&counter_b);

    printf("Final value of counter_a: %d\n", val_a);
    printf("Final value of counter_b: %d\n", val_b);

    return 0;
}
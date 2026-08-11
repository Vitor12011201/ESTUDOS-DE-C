// File: 1632-static_block_scope_easy.c
#include <stdio.h>

/* OBJECTIVE: Demonstrate the persistence of value and default initialization (zero)
   of 'static' variables declared inside functions. */

void register_access(void) {
    // Initialized only once when the program loads.
    // 'default_counter' is implicitly 0.
    static int default_counter;
    static int initialized_counter = 100;

    default_counter++;
    initialized_counter += 5;

    printf("Access #%d | Offset counter: %d\n", default_counter, initialized_counter);
}

int main(void) {
    printf("--- static Test in Block Scope ---\n");
    register_access(); // Access #1 | Offset: 105
    register_access(); // Access #2 | Offset: 110
    register_access(); // Access #3 | Offset: 115

    return 0;
}
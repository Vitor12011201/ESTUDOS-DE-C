#include <stdio.h>

/* OBJECTIVE: Demonstrate local-scope variables (auto and register)
   and the fundamental restriction on pointers regarding the 'register' class. */

void demonstrate_auto_and_register(void) {
    // 'auto' is the default behavior for local variables.
    // Lives on the Stack and is destroyed when leaving the function.
    auto int stack_counter = 10;

    // 'register' requests the compiler to keep the variable in a CPU register.
    register int cpu_counter = 0;

    for (int i = 0; i < 1000; i++) {
        cpu_counter += i;
    }

    printf("--- auto vs register ---\n");
    printf("Value on Stack (auto):       %d\n", stack_counter);
    printf("Accumulated in CPU (register): %d\n", cpu_counter);

    // GOLDEN RULE: It is not allowed to take the memory address (&) of 'register' variables,
    // because CPU registers do not have an address on the RAM memory bus!
    // int *ptr = &cpu_counter; // COMPILATION ERROR!
}

int main(void) {
    demonstrate_auto_and_register();
    return 0;
}
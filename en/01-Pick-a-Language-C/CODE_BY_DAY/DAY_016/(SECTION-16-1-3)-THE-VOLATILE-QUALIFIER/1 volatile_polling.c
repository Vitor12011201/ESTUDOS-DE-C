#include <stdio.h>

/* OBJECTIVE: Demonstrate how 'volatile' prevents the compiler from assuming
   that the value of a flag never changes inside a polling loop. */

int main() {
    /* Without 'volatile', the compiler would look at the 'while (!status_ready)' loop below,
       see that no one modifies 'status_ready' INSIDE the loop body, and optimize
       the code to 'while (1)', freezing execution forever. */
    volatile int status_ready = 0;

    printf("--- Monitoring Hardware Flag (volatile) ---\n");

    int interrupt_simulator = 0;
    while (!status_ready) {
        interrupt_simulator++;

        // Simulates an asynchronous change coming from hardware after 3 checks
        if (interrupt_simulator == 3) {
            status_ready = 1; // The CPU is forced to write this directly to RAM
        }
    }

    printf("Signal captured successfully at iteration %d!\n", interrupt_simulator);
    return 0;
}
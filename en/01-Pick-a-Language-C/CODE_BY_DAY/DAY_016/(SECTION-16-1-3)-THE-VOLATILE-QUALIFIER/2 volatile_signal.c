#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/* OBJECTIVE: Use 'volatile sig_atomic_t' to create a shutdown flag
   safely modified by an operating system signal interruption (SIGINT). */

// 'sig_atomic_t': Guarantees atomic read/write in 1 CPU instruction.
// 'volatile': Ensures the main loop re-reads the value from RAM on each iteration.
volatile sig_atomic_t server_active = 1;

void handle_sigint(int signal) {
    (void)signal;
    server_active = 0; // Changed asynchronously by the Kernel
}

int main() {
    // Registers the handler for the SIGINT interruption (Ctrl+C)
    signal(SIGINT, handle_sigint);

    printf("--- Network Server Active (Press Ctrl+C to shut down) ---\n");

    int cycles = 0;
    while (server_active) {
        printf("Waiting for connection packets... [%d]\n", ++cycles);
        sleep(1); // Simulates network delay
    }

    printf("\n[SIGNAL CAPTURED] Releasing resources and closing sockets cleanly.\n");
    return 0;
}
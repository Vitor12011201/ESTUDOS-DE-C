#include <stdio.h>

/* OBJECTIVE: Demonstrate the Undefined Behavior error when returning a pointer to an
   'auto' variable and the safe solution using 'static'. */

// GRAVE ERROR: Returns pointer to memory that will be destroyed when leaving the function!
char* create_dangerous_message(void) {
    char auto_buffer[] = "Connection established";
    return auto_buffer; // COMPILER WARNING: Dangling Pointer / Undefined Behavior!
}

// CORRECT: The buffer lives in static memory and remains valid after return
const char* create_safe_message(void) {
    static char static_buffer[] = "Active network connection (Port 47989)";
    return static_buffer; // SAFE: Memory persists throughout the entire program
}

int main(void) {
    printf("--- Returning Pointers and Lifetime ---\n");

    // Attempt with static (Safe)
    const char *msg = create_safe_message();
    printf("[SUCCESS] Static message received: \"%s\"\n", msg);

    // Uncommenting the line below would cause unpredictable behavior or SegFault:
    // printf("[DANGER] %s\n", create_dangerous_message());

    return 0;
}